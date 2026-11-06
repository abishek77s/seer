#!/bin/bash
# Builds Seer on Linux against the RAD Debugger sources, the way its build.sh
# does.
# Usage: ./build.sh [debug|release] [clang|gcc]     (default: debug clang)
#        CC=clang-22 ./build.sh release clang     picks a specific compiler
# Needs pkg-config and the dev packages for freetype2, X11, Xext, Xfixes,
# Xrandr, GL and EGL, e.g. on Debian/Ubuntu:
#   sudo apt install clang pkg-config libfreetype6-dev libx11-dev libxext-dev \
#        libxfixes-dev libxrandr-dev libgl-dev libegl-dev
set -eu
cd "$(dirname "$0")"

for arg in "$@"; do declare $arg='1'; done

# RAD Debugger: the external/raddebugger submodule, else a sibling checkout.
if [[ -f external/raddebugger/src/base/base_inc.h ]]; then rad=external/raddebugger
elif [[ -f ../raddebugger/src/base/base_inc.h ]]; then rad=../raddebugger
else echo "[error: RAD Debugger sources not found; run: git submodule update --init]"; exit 1; fi

# Apply Seer's patches to it once.
for p in patches/*.patch; do
  if git -C "$rad" apply --ignore-whitespace --check "$PWD/$p" 2>/dev/null; then
    git -C "$rad" apply --ignore-whitespace "$PWD/$p" && echo "[applied $p]"
  fi
done

cc_common="-mcx16 -I$rad/src -I. -D_GNU_SOURCE -Wall -Wno-missing-braces -Wno-unused-function -Wno-unused-variable -Wno-unused-but-set-variable -Wno-unused-value -Wno-unknown-pragmas -D_USE_MATH_DEFINES -Dstrdup=_strdup -Dgnu_printf=printf"
cc_gcc="-Wno-incompatible-pointer-types"
cc_clang="-fdiagnostics-absolute-paths -Wno-for-loop-analysis -Wno-incompatible-pointer-types-discards-qualifiers -Wno-initializer-overrides -Wno-compare-distinct-pointer-types -Wno-single-bit-bitfield-constant-conversion -Wno-deprecated-declarations -Wno-writable-strings -Wno-unknown-warning-option -Wno-deprecated-register -Wno-unused-local-typedef -msse2"
cc_debug="-g -O0 -DBUILD_DEBUG=1"
cc_release="-O2 -DBUILD_DEBUG=0 -ffunction-sections -fdata-sections -Wl,--gc-sections -s"

if [[ "${gcc:-0}" == "1" ]]; then compiler="${CC:-gcc} $cc_gcc"; echo "[gcc compile]"
else compiler="${CC:-clang} $cc_clang"; echo "[clang compile]"; fi
if [[ "${release:-0}" == "1" ]]; then echo "[release mode]"; opts="$cc_release"
else echo "[debug mode]"; opts="$cc_debug"; fi

if [[ -x "$(command -v pkg-config)" ]]; then
  libs="$(pkg-config --cflags --libs freetype2 x11 xext xfixes xrandr gl egl)"
else
  libs="-I/usr/include/freetype2 -lfreetype -lX11 -lXext -lXfixes -lXrandr -lGL -lEGL"
fi

mkdir -p build
$compiler $opts $cc_common seer_main.c $libs -lpthread -lm -lrt -ldl -latomic -o build/seer
echo "[built build/seer]"
