////////////////////////////////
//~ Sources

read_only global String8 ic_svgs[IC_Icon_COUNT] =
{
  {0},
  // folder.svg
  str8_lit_comp(
    "<svg width=\"16\" height=\"16\" viewBox=\"0 0 16 16\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\">"
    "<path d=\"M4.41707 12.4786H6.20854H11.5829C12.5724 12.4786 13.3744 11.6766 13.3744 10.6872V7.55212V7.10426C13.3744 6.11486 12.5724 5.3128 11.5829 5.3128H9.63778C9.16265 5.3128 8.70699 5.12406 8.37102 4.78808L7.62898 4.04604C7.29301 3.71007 6.83735 3.52133 6.36222 3.52133H4.41707C3.42768 3.52133 2.62561 4.3234 2.62561 5.3128V10.6872C2.62561 11.6766 3.42768 12.4786 4.41707 12.4786Z\" stroke=\"#DCE0E5\" stroke-width=\"1.2\"/>"
    "</svg>"),
  // rotate_cw.svg
  str8_lit_comp(
    "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"16\" height=\"16\" fill=\"none\">"
    "<path stroke=\"#000\" stroke-linecap=\"round\" stroke-linejoin=\"round\" stroke-width=\"1.2\" d=\"m13 5.778-1.256-1.256A5.416 5.416 0 0 0 8 3a5 5 0 1 0 4.583 7\"/>"
    "<path stroke=\"#000\" stroke-linecap=\"round\" stroke-linejoin=\"round\" stroke-width=\"1.2\" d=\"M13 3v3h-3\"/>"
    "</svg>"),
  // magnifying_glass.svg
  str8_lit_comp(
    "<svg width=\"16\" height=\"16\" viewBox=\"0 0 16 16\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\">"
    "<path opacity=\"0.1\" d=\"M3 7.31034C3 4.92981 4.92981 3 7.31034 3C9.6909 3 11.6207 4.92981 11.6207 7.31034C11.6207 9.6909 9.6909 11.6207 7.31034 11.6207C4.92981 11.6207 3 9.6909 3 7.31034Z\" fill=\"#DCE0E5\"/>"
    "<path d=\"M13 13L10.4138 10.4138M3 7.31034C3 4.92981 4.92981 3 7.31034 3C9.6909 3 11.6207 4.92981 11.6207 7.31034C11.6207 9.6909 9.6909 11.6207 7.31034 11.6207C4.92981 11.6207 3 9.6909 3 7.31034Z\" stroke=\"#DCE0E5\" stroke-width=\"1.2\" stroke-linecap=\"round\" stroke-linejoin=\"round\"/>"
    "</svg>"),
  // moon
  str8_lit_comp(
    "<svg width=\"16\" height=\"16\" viewBox=\"0 0 16 16\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\">"
    "<path opacity=\"0.1\" d=\"M7.5 2.5A4.25 4.25 0 0 0 13.5 8.5A5.75 5.75 0 1 1 7.5 2.5Z\" fill=\"#DCE0E5\"/>"
    "<path d=\"M7.5 2.5A4.25 4.25 0 0 0 13.5 8.5A5.75 5.75 0 1 1 7.5 2.5Z\" stroke=\"#DCE0E5\" stroke-width=\"1.2\" stroke-linecap=\"round\" stroke-linejoin=\"round\"/>"
    "</svg>"),
  // sun
  str8_lit_comp(
    "<svg width=\"16\" height=\"16\" viewBox=\"0 0 16 16\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\">"
    "<circle opacity=\"0.1\" cx=\"8\" cy=\"8\" r=\"2.6\" fill=\"#DCE0E5\"/>"
    "<circle cx=\"8\" cy=\"8\" r=\"2.6\" stroke=\"#DCE0E5\" stroke-width=\"1.2\"/>"
    "<path d=\"M8 2V3.2M8 12.8V14M2 8H3.2M12.8 8H14M3.76 3.76L4.61 4.61M11.39 11.39L12.24 12.24M3.76 12.24L4.61 11.39M11.39 4.61L12.24 3.76\" stroke=\"#DCE0E5\" stroke-width=\"1.2\" stroke-linecap=\"round\"/>"
    "</svg>"),
  // list_tree.svg (the outline panel's icon)
  str8_lit_comp(
    "<svg width=\"16\" height=\"16\" viewBox=\"0 0 16 16\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\">"
    "<path d=\"M13.5 8H9.5\" stroke=\"black\" stroke-width=\"1.2\" stroke-linecap=\"round\" stroke-linejoin=\"round\"/>"
    "<path d=\"M13.5 4L6.5 4\" stroke=\"black\" stroke-width=\"1.2\" stroke-linecap=\"round\" stroke-linejoin=\"round\"/>"
    "<path d=\"M13.5 12H9.5\" stroke=\"black\" stroke-width=\"1.2\" stroke-linecap=\"round\" stroke-linejoin=\"round\"/>"
    "<path d=\"M3 3.5V6.33333C3 7.25 3.72 8 4.6 8H7\" stroke=\"black\" stroke-width=\"1.2\" stroke-linecap=\"round\" stroke-linejoin=\"round\"/>"
    "<path d=\"M3 6V10.5C3 11.325 3.72 12 4.6 12H7\" stroke=\"black\" stroke-width=\"1.2\" stroke-linecap=\"round\" stroke-linejoin=\"round\"/>"
    "</svg>"),
  // close.svg
  str8_lit_comp(
    "<svg width=\"16\" height=\"16\" viewBox=\"0 0 16 16\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\">"
    "<path d=\"M4.70581 4.5L11.294 11.5M11.294 4.5L4.70581 11.5\" stroke=\"black\" stroke-width=\"1.2\" stroke-linecap=\"round\"/>"
    "</svg>"),
  // file_icons/chevron_right.svg
  str8_lit_comp(
    "<svg width=\"16\" height=\"16\" viewBox=\"0 0 16 16\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\">"
    "<path d=\"M6.64062 4.64062L9.89062 8.00125L6.64062 11.375\" stroke=\"black\" stroke-width=\"1.2\" stroke-linecap=\"round\" stroke-linejoin=\"round\"/>"
    "</svg>"),
  // file_icons/chevron_down.svg
  str8_lit_comp(
    "<svg width=\"16\" height=\"16\" viewBox=\"0 0 16 16\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\">"
    "<path d=\"M4.63281 6.66406L7.99344 9.89844L11.3672 6.66406\" stroke=\"black\" stroke-width=\"1.2\" stroke-linecap=\"round\" stroke-linejoin=\"round\"/>"
    "</svg>"),
  // file.svg
  str8_lit_comp(
    "<svg width=\"16\" height=\"16\" viewBox=\"0 0 16 16\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\">"
    "<path d=\"M9 2V4.24394C9 4.5622 9.12643 4.86743 9.35147 5.09247C9.57652 5.31751 9.88174 5.44394 10.2 5.44394H12.5\" stroke=\"#DCE0E5\" stroke-width=\"1.2\" stroke-linejoin=\"round\"/>"
    "<path d=\"M10.4283 2.79015C9.95564 2.28602 9.29544 2 8.60442 2H4.625C4.32663 2 4.04048 2.12643 3.8295 2.35147C3.61853 2.57652 3.5 2.88174 3.5 3.2V12.8C3.5 13.1183 3.61853 13.4235 3.8295 13.6485C4.04048 13.8736 4.32663 14 4.625 14H11.375C11.6734 14 11.9595 13.8736 12.1705 13.6485C12.3815 13.4235 12.5 13.1183 12.5 12.8V5.98862C12.5 5.35347 12.2582 4.74213 11.8238 4.27877L10.4283 2.79015Z\" stroke=\"#DCE0E5\" stroke-width=\"1.2\" stroke-linecap=\"round\" stroke-linejoin=\"round\"/>"
    "</svg>"),
  // threads_sidebar_left_closed.svg (the sidebar toggle, closed)
  str8_lit_comp(
    "<svg width=\"16\" height=\"16\" viewBox=\"0 0 16 16\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\">"
    "<rect opacity=\"0.1\" width=\"5\" height=\"12\" rx=\"2\" transform=\"matrix(-1 0 0 1 7 2)\" fill=\"#C6CAD0\"/>"
    "<path d=\"M7 2V14\" stroke=\"#C6CAD0\" stroke-width=\"1.2\"/>"
    "<rect x=\"2\" y=\"2\" width=\"12\" height=\"12\" rx=\"1.5\" stroke=\"#C6CAD0\" stroke-width=\"1.2\"/>"
    "</svg>"),
  // threads_sidebar_left_open.svg (the sidebar toggle, open)
  str8_lit_comp(
    "<svg width=\"16\" height=\"16\" viewBox=\"0 0 16 16\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\">"
    "<rect opacity=\"0.8\" width=\"5\" height=\"12\" rx=\"2\" transform=\"matrix(-1 0 0 1 7 2)\" fill=\"#C6CAD0\"/>"
    "<path d=\"M7 2V14\" stroke=\"#C6CAD0\" stroke-width=\"1.2\"/>"
    "<rect x=\"2\" y=\"2\" width=\"12\" height=\"12\" rx=\"1.5\" stroke=\"#C6CAD0\" stroke-width=\"1.2\"/>"
    "</svg>"),
  // copy.svg
  str8_lit_comp(
    "<svg width=\"16\" height=\"16\" viewBox=\"0 0 16 16\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\">"
    "<path d=\"M12.486 6.2H7.24795C6.66895 6.2 6.19995 6.669 6.19995 7.248V12.486C6.19995 13.064 6.66895 13.533 7.24795 13.533H12.486C13.064 13.533 13.533 13.064 13.533 12.486V7.248C13.533 6.669 13.064 6.2 12.486 6.2Z\" stroke=\"black\" stroke-width=\"1.2\" stroke-linecap=\"round\" stroke-linejoin=\"round\"/>"
    "<path d=\"M3.91712 10.203C3.63951 10.2022 3.37351 10.0915 3.1773 9.89511C2.98109 9.69872 2.87064 9.43261 2.87012 9.155V3.917C2.87091 3.63956 2.98147 3.37371 3.17765 3.17753C3.37383 2.98135 3.63968 2.87079 3.91712 2.87H9.15512C9.43273 2.87053 9.69883 2.98097 9.89523 3.17718C10.0916 3.37339 10.2023 3.63939 10.2031 3.917\" stroke=\"black\" stroke-width=\"1.2\" stroke-linecap=\"round\" stroke-linejoin=\"round\"/>"
    "</svg>"),
  // check.svg
  str8_lit_comp(
    "<svg width=\"16\" height=\"16\" viewBox=\"0 0 16 16\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\">"
    "<path d=\"M4.625 8.98121L7.03402 10.7714L11.3437 4.75989\" stroke=\"black\" stroke-width=\"1.2\" stroke-linecap=\"round\" stroke-linejoin=\"round\"/>"
    "</svg>"),
  // info.svg
  str8_lit_comp(
    "<svg width=\"16\" height=\"16\" viewBox=\"0 0 16 16\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\">"
    "<path d=\"M8 14C11.3137 14 14 11.3137 14 8C14 4.68629 11.3137 2 8 2C4.68629 2 2 4.68629 2 8C2 11.3137 4.68629 14 8 14Z\" stroke=\"black\" stroke-width=\"1.2\"/>"
    "<path d=\"M7 11H8M8 11H9M8 11V8.1C8 8.04477 7.95523 8 7.9 8H7\" stroke=\"black\" stroke-width=\"1.2\" stroke-linecap=\"round\"/>"
    "<path d=\"M8 6.5C8.55228 6.5 9 6.05228 9 5.5C9 4.94772 8.55228 4.5 8 4.5C7.44772 4.5 7 4.94772 7 5.5C7 6.05228 7.44772 6.5 8 6.5Z\" fill=\"black\"/>"
    "</svg>"),
  // sparkle.svg
  str8_lit_comp(
    "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"16\" height=\"16\" fill=\"none\"><path stroke=\"#000\" stroke-linecap=\"round\" stroke-linejoin=\"round\" stroke-width=\"1.2\" d=\"M6.762 10.1a1.2 1.2 0 0 0-.862-.862l-3.68-.95a.3.3 0 0 1 0-.577l3.68-.95a1.2 1.2 0 0 0 .862-.86l.95-3.682a.3.3 0 0 1 .577 0L9.238 5.9a1.2 1.2 0 0 0 .862.862l3.68.949a.3.3 0 0 1 0 .578l-3.68.949a1.2 1.2 0 0 0-.862.862l-.95 3.68a.3.3 0 0 1-.577 0l-.949-3.68Z\"/></svg>"),
  // chat.svg
  str8_lit_comp(
    "<svg width=\"16\" height=\"16\" viewBox=\"0 0 16 16\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\">"
    "<path d=\"M4.17279 8.26346C4.87566 8.62402 5.68419 8.72168 6.4527 8.53885C7.2212 8.35601 7.89913 7.90471 8.36433 7.26626C8.82953 6.62781 9.0514 5.8442 8.98996 5.05664C8.92852 4.26908 8.58781 3.52936 8.02922 2.97078C7.47064 2.41219 6.73092 2.07148 5.94336 2.01004C5.1558 1.9486 4.37219 2.17047 3.73374 2.63567C3.09529 3.10087 2.64399 3.7788 2.46115 4.5473C2.27832 5.31581 2.37598 6.12435 2.73654 6.82721L2 9L4.17279 8.26346Z\" stroke=\"black\" stroke-width=\"1.2\" stroke-linecap=\"round\" stroke-linejoin=\"round\"/>"
    "<path d=\"M7.07168 11C7.16761 11.4537 7.35843 11.8857 7.63567 12.2662C8.10087 12.9047 8.7788 13.356 9.5473 13.5388C10.3158 13.7217 11.1243 13.624 11.8272 13.2634L14 14L13.2635 11.8272C13.624 11.1243 13.7217 10.3158 13.5388 9.54728C13.356 8.77877 12.9047 8.10084 12.2663 7.63564C11.8858 7.3584 11.4537 7.16759 11 7.07166\" stroke=\"black\" stroke-width=\"1.2\" stroke-linecap=\"round\" stroke-linejoin=\"round\"/>"
    "</svg>"),
  // warning.svg
  str8_lit_comp(
    "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"16\" height=\"16\" fill=\"none\"><path stroke=\"#000\" stroke-linecap=\"round\" stroke-linejoin=\"round\" stroke-width=\"1.2\" d=\"M13.84 11.6 9.037 3.199a1.2 1.2 0 0 0-2.089 0l-4.802 8.403a1.2 1.2 0 0 0 1.05 1.8h9.604a1.201 1.201 0 0 0 1.038-1.8ZM8 6v2.667M8 11.333h.007\"/></svg>"),
  // stop.svg
  str8_lit_comp(
    "<svg width=\"16\" height=\"16\" viewBox=\"0 0 16 16\" fill=\"none\" xmlns=\"http://www.w3.org/2000/svg\">"
    "<path d=\"M4.5 11.2667V4.73333C4.5 4.60446 4.60446 4.5 4.73333 4.5H11.2667C11.3956 4.5 11.5 4.60446 11.5 4.73333V11.2667C11.5 11.3956 11.3956 11.5 11.2667 11.5H4.73333C4.60446 11.5 4.5 11.2667 4.5 11.2667Z\" fill=\"#C6CAD0\" stroke=\"#C6CAD0\" stroke-width=\"1.2\" stroke-linejoin=\"round\"/>"
    "</svg>"),
};

////////////////////////////////
//~ Raster Cache

typedef struct IC_Raster IC_Raster;
struct IC_Raster
{
  IC_Icon icon;
  S32 px;
  R_Handle texture;              // zero when the SVG failed to rasterize
};

global IC_Raster ic_rasters[64];
global U64 ic_raster_count = 0;

internal void
ic_release_all(void)
{
  for EachIndex(i, ic_raster_count)
  {
    if(!r_handle_match(ic_rasters[i].texture, r_handle_zero())) { r_tex2d_release(ic_rasters[i].texture); }
  }
  ic_raster_count = 0;
}

internal R_Handle
ic_texture(IC_Icon icon, S32 px)
{
  for EachIndex(i, ic_raster_count)
  {
    if(ic_rasters[i].icon == icon && ic_rasters[i].px == px) { return ic_rasters[i].texture; }
  }
  // a full cache is only reached across many scale changes; start over
  if(ic_raster_count == ArrayCount(ic_rasters)) { ic_release_all(); }
  IC_Raster *raster = &ic_rasters[ic_raster_count++];
  raster->icon = icon;
  raster->px = px;
  raster->texture = r_handle_zero();
  Temp scratch = scratch_begin(0, 0);
  // nanosvg parses in place, so it gets a terminated copy
  char *src = (char *)push_str8_copy(scratch.arena, ic_svgs[icon]).str;
  NSVGimage *svg = nsvgParse(src, "px", 96.f);
  NSVGrasterizer *rast = nsvgCreateRasterizer();
  if(svg && rast && svg->width > 0)
  {
    U8 *pixels = push_array(scratch.arena, U8, (U64)px*px*4);
    nsvgRasterize(rast, svg, 0, 0, px/svg->width, pixels, px, px, px*4);
    for(S32 p = 0; p < px*px; p += 1) { pixels[p*4+0] = pixels[p*4+1] = pixels[p*4+2] = 255; }
    raster->texture = r_tex2d_alloc(R_ResourceKind_Static, v2s32(px, px), R_Tex2DFormat_RGBA8, pixels);
  }
  if(rast) { nsvgDeleteRasterizer(rast); }
  if(svg) { nsvgDelete(svg); }
  scratch_end(scratch);
  return raster->texture;
}

////////////////////////////////
//~ Drawing

// Draws `icon` at `px` physical pixels, centered in `r` on whole pixels.
internal void
ic_draw(IC_Icon icon, Rng2F32 r, F32 px, Vec4F32 color)
{
  S32 size = (S32)round_f32(px);
  if(icon <= IC_Icon_Null || icon >= IC_Icon_COUNT || size <= 0) { return; }
  R_Handle texture = ic_texture(icon, size);
  if(r_handle_match(texture, r_handle_zero())) { return; }
  F32 x0 = round_f32((r.x0 + r.x1 - size)/2);
  F32 y0 = round_f32((r.y0 + r.y1 - size)/2);
  dr_img(r2f32p(x0, y0, x0 + size, y0 + size), r2f32p(0, 0, (F32)size, (F32)size), texture, th_linear(color), 0, 0, 0);
}
