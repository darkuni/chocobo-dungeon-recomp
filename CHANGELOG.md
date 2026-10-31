# Changelog

## 1.1 - 2026-10-30
- First start extracts your own disc image (.iso / .ciso) into the `extracted` folder; no extraction tool needed.
- Windows builds and releases come from GitHub Actions.

## 1.0 (final) - 2026-10-16
- Version 1.0 stamped in the executable; no functional changes from 0.8.

## 0.8
- Audio: no more choppy sound in cutscenes. Audio slices were discarded when the game serviced
  its sound interrupt late, and the mixer sometimes replayed stale frames. Nothing is dropped now,
  the DSP-done interrupt is delivered ahead of queued audio periods, and output goes through a
  60 ms jitter buffer.
- Game speed is Normal / 2x ... 8x. The old "Unlimited" mode (which could lock the game) is gone.
  Hold Tab / right stick click = 4x, or double the set speed up to 8x.

## 0.7
- Fixed the black screen after the tutorial (town, houses). The game copies the depth buffer into
  a padded 1024x512 texture for its depth-of-field pass. EFB copies now support depth and all copy
  formats, and copies smaller than the declared texture are sampled with rescaled coordinates.

## 0.6
- Controller option "Swap A/B and X/Y" (Nintendo-style button positions).

## 0.5
- Game speed setting (fast-forward) and hold-to-fast-forward.
- Classic Controller support (reported to the game as a real Classic Controller).

## 0.4
- Draw-call batching (about 40x fewer GPU calls in dungeons), faster vertex processing,
  no idle-loop CPU spin, faster paired-single memory access, fixed-address guest memory.
- MSAA anti-aliasing, trilinear mipmaps, anisotropic filtering, filtered downscaling.
- CPU load readout next to the frame rate.

## 0.3
- Portable folder: data, saves and settings next to the executable; icon and version info.

## Earlier
- Static recompiler, runtime (threads, IOS, DVD, NAND, AX audio, GX -> OpenGL), Windows build,
  controller support, HD resolution, widescreen, settings menu.
