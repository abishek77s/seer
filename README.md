# Seer

Seer (சீர், Tamil for "order, excellence; to set right") is a Markdown
viewer that matches Zed's markdown preview, built on the [RAD Debugger](https://github.com/EpicGamesExt/raddebugger) UI layers.

## Download

Builds for Windows and Linux are attached to each
[release](../../releases) and to every CI run (Actions → builds → Artifacts).
Unzip and keep `data/` next to the executable: it holds the fonts and icons.

## Build

```sh
git clone --recursive https://github.com/abishek77s/seer
```

Windows: `build.bat release [msvc|clang]` → `build\seer.exe`

Linux: install the dev packages, then `./build.sh release [clang|gcc]` → `build/seer`

```sh
sudo apt install clang pkg-config libfreetype6-dev libx11-dev libxext-dev \
  libxfixes-dev libxrandr-dev libgl-dev libegl-dev
```

RAD Debugger is the `external/raddebugger` submodule (a sibling
`../raddebugger` checkout also works). The build scripts apply the patches in
`patches/` to it.
