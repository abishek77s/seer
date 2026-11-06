@echo off
setlocal
cd /D "%~dp0"

:: Builds mdview against the RAD Debugger sources, the way its build.bat does.
:: Usage: build [debug|release] [msvc|clang]     (default: debug msvc)
:: Uses the compiler from PATH, or finds the newest Visual Studio via vswhere.

for %%a in (%*) do set "%%~a=1"
if not "%msvc%"=="1" if not "%clang%"=="1" set msvc=1
if "%clang%"=="1" (set msvc=0& set cc=clang& echo [clang compile]) else (set cc=cl& echo [msvc compile])
if "%release%"=="1" (echo [release mode]) else (echo [debug mode])

where %cc% >nul 2>nul && goto :have_cc
set vswhere="%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe"
for /f "usebackq delims=" %%i in (`%vswhere% -latest -products * -property installationPath`) do call "%%i\VC\Auxiliary\Build\vcvars64.bat" >nul
where %cc% >nul 2>nul || (echo [error: %cc% not found] & exit /b 1)
:have_cc

:: RAD Debugger: the external\raddebugger submodule, else a sibling checkout.
set rad=
if exist external\raddebugger\src\base\base_inc.h (set rad=external\raddebugger) else if exist ..\raddebugger\src\base\base_inc.h (set rad=..\raddebugger)
if "%rad%"=="" (echo [error: RAD Debugger sources not found; run: git submodule update --init] & exit /b 1)

:: Apply mdview's patches to it once.
for %%p in (patches\*.patch) do (
    git -C %rad% apply --ignore-whitespace --check "%CD%\%%p" >nul 2>nul && git -C %rad% apply --ignore-whitespace "%CD%\%%p" && echo [applied %%p]
)

:: /MANIFEST:EMBED puts the Common-Controls v6 manifest inside the exe, as RAD
:: Debugger's build does. Without it the manifest is a separate
:: mdview.exe.manifest, and an exe copied without that file loads the old
:: comctl32, which has no TaskDialogIndirect ("The ordinal 345 could not be
:: located").
set cl_common=/I..\%rad%\src /I.. /nologo /FC /Zc:preprocessor /W3 /wd4244 /wd4305 /wd4267 /wd4018 /wd4146
set cl_debug=/Od /Ob1 /Z7 /DBUILD_DEBUG=1
set cl_release=/O2 /GL /Gy /Gw /GF /DBUILD_DEBUG=0
set cl_link_debug=/DEBUG:FULL
set cl_link_release=/LTCG /OPT:REF /OPT:ICF /DEBUG:NONE
set clang_common=-mcx16 -I..\%rad%\src -I.. -fdiagnostics-absolute-paths -Wall -Wno-unknown-warning-option -Wno-unknown-pragmas -Wno-missing-braces -Wno-unused-function -Wno-unused-parameter -Wno-writable-strings -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-local-typedef -Wno-deprecated-register -Wno-deprecated-declarations -Wno-unused-but-set-variable -Wno-single-bit-bitfield-constant-conversion -Wno-compare-distinct-pointer-types -Wno-initializer-overrides -Wno-incompatible-pointer-types-discards-qualifiers -D_USE_MATH_DEFINES -Dstrdup=_strdup -Dgnu_printf=printf
set clang_debug=-g -gcodeview -O0 -DBUILD_DEBUG=1 -D_DEBUG
set clang_release=-O2 -DBUILD_DEBUG=0 -DNDEBUG

if not exist build mkdir build
pushd build
if "%clang%"=="1" (
    if "%release%"=="1" (set opts=%clang_release%) else (set opts=%clang_debug%)
    call clang %%opts%% %clang_common% ..\mdview_main.c -fuse-ld=lld -Xlinker /MANIFEST:EMBED -Xlinker /INCREMENTAL:NO -Xlinker /SUBSYSTEM:WINDOWS -Xlinker /opt:ref -o mdview.exe || (popd & exit /b 1)
) else (
    if "%release%"=="1" (set opts=%cl_release%& set linkopts=%cl_link_release%) else (set opts=%cl_debug%& set linkopts=%cl_link_debug%)
    call cl %%opts%% %cl_common% ..\mdview_main.c /link %%linkopts%% /MANIFEST:EMBED /INCREMENTAL:NO /SUBSYSTEM:WINDOWS /out:mdview.exe || (popd & exit /b 1)
)
popd
echo [built build\mdview.exe]
