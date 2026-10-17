Final Fantasy Fables: Chocobo's Dungeon - native Windows build (static recompilation)  v0.7

Folder layout (portable - copy the whole folder to any Windows 10/11 PC)
  ChocoboDungeon\
    chocobo.exe, SDL2.dll, libwinpthread-1.dll   the program
    chocobo.ini                                    settings (created on first run)
    extracted\sys, extracted\files                 game data from YOUR disc (not included)
    nand\                                          saves (created on first run)

Setup
  Put the extracted disc's 'sys' and 'files' folders into 'extracted', then run chocobo.exe.
  (Or start it with a path: chocobo.exe D:\somewhere\extracted - saves then go next to that folder.)
  Requirements: 64-bit Windows 10/11, a GPU with OpenGL 3.3.
  To move to another PC, copy the whole ChocoboDungeon folder - saves and settings come along.

Settings menu
  F1 or Esc (keyboard), Start+Back together (controller). Up/Down select, Left/Right change,
  Enter/A confirm, Esc/B close. Changes apply immediately and are saved to chocobo.ini.
  (The game's own 16:9 layout switch needs a restart; the picture shape changes at once.)

Settings (chocobo.ini)
  resolution_scale = 2     internal resolution: 1 = Wii (640x528), 2 = 1280x1056, 3 = 1920x1584, 4 = 2560x2112
  widescreen = 1           game runs in its 16:9 mode, window/fullscreen is 16:9 (0 = original 4:3)
  vsync = 1                smooth presentation (does not slow the game; frames are shown on a separate thread)
  fullscreen = 0           F11 or Alt+Enter toggles at any time
  window_scale = 2
  controls = sideways      or "nunchuk" or "classic" - pick the matching grip in the game's grip menu
                           (Classic Controller belongs to the game's "Sideways" grip)
  swap_ab_xy = 0           gamepad: 1 = swap A<->B and X<->Y (use the face buttons by position, Nintendo style;
                           also applies to the settings menu's confirm/back)
  speed = 1                game speed: 1 = normal, 2 = double, 3 = triple, 0 = unlimited.
                           The game's logic runs per frame, so this is fast-forward, not extra smoothness.
                           Hold Tab (keyboard) or click the right stick for a burst of unlimited speed.
  show_perf = 1            frame rate + CPU load in the corner ("CPU 30%" = the emulation thread is busy
                           30% of the time; the rest is headroom)
  msaa = 4                 anti-aliasing for 3D edges: 1 = off, 2, 4, 8
  smooth_textures = 1      trilinear mipmapping (removes shimmer on distant floors/walls)
  anisotropy = 16          anisotropic filtering, keeps textures sharp at steep angles: 1 = off .. 16
  Tip: resolution 3x or 4x on a smaller window is also downsampled with a proper filter,
  so it works as supersampling anti-aliasing on top of MSAA.

Controller (Xbox-style layout, any SDL-supported pad, hot-pluggable)
  sideways grip:  d-pad / left stick = movement (screen directions)
                  A = 2 (confirm)   B = 1 (cancel/menu)   X = Wii A   Y = Wii B
  nunchuk grip:   left stick = Nunchuk stick, d-pad = Wii d-pad
                  A = Wii A   B = Wii B   X = 1   Y = 2   LB/LT = Z   RB/RT = C
  classic:        Classic Controller, buttons by label: A = A   B = B   X = X   Y = Y
                  LB/RB = L/R   LT/RT = ZL/ZR   both sticks   d-pad
  all:            Start = +   Back = -   Guide = HOME   right stick click (hold) = fast-forward
  Title screen "Press A+B": X + Y (sideways), A + B (nunchuk or classic).

Keyboard
  sideways grip:  arrows = movement, X = 2, Z = 1, A = Wii A, S = Wii B
  nunchuk grip:   arrows = stick, I/J/K/L = d-pad, X = Wii A, Z = Wii B, Shift = Z, C = C
  classic:        arrows = d-pad, X = A, Z = B, S = X, A = Y, Q/W = L/R, 1/2 = ZL/ZR, I/J/K/L = right stick
  all:            Enter = +, Backspace = -, H = HOME, Tab (hold) = fast-forward,
                  F11 = fullscreen, Esc = settings menu (Quit is in the menu)
  Title screen "Press A+B": A + S (sideways) or X + Z (nunchuk).
