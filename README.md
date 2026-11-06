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

## Credits

Seer is a port of [Zed](https://github.com/zed-industries/zed)'s markdown
preview, by Zed Industries. Its rendering, styles, sizes, layout and file
structure follow Zed's sources one to one:

| Seer | Zed |
|---|---|
| `markdown/` | `crates/markdown` |
| `markdown_preview/` | `crates/markdown_preview` |
| `outline_panel/` | `crates/outline_panel` |
| `recent_panel/` | `crates/sidebar` |
| `theme/` | `crates/theme` and `assets/themes/one` |
| `icons/` | `assets/icons` and `crates/ui` |
| `seer_main.c` | `crates/zed/src/main.rs` |

Those Zed crates are licensed under GPL-3.0-or-later.
[reference/ZED_MARKDOWN_PREVIEW.md](reference/ZED_MARKDOWN_PREVIEW.md) maps
Seer's code to Zed's, file by file; it was written against Zed commit
`28d0a3547f16b9609b301b48ab363bfca649c864`.

Seer also uses:

- **Zed's icons** (`assets/icons`), parts of which come from
  [Lucide](https://lucide.dev) (ISC License).
- **One Dark and One Light**, the theme Zed ships, which comes from Atom
  (MIT License, © 2014 GitHub Inc.).
- **IBM Plex Sans** (© 2017 IBM Corp.) and **Lilex** (© 2019 The Lilex Project
  Authors), the fonts Zed bundles, under the SIL Open Font License 1.1. Their
  licenses are in `data/fonts`.
- **[RAD Debugger](https://github.com/EpicGamesExt/raddebugger)**'s base,
  window, font, render and draw layers (MIT License, © Epic Games Tools).
- **[NanoSVG](https://github.com/memononen/nanosvg)** by Mikko Mononen (zlib
  License), in `third_party/nanosvg`.
