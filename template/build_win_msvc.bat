cl main.c /I ..\raylib\include /MD /Femain.exe ^
  /link /LIBPATH:..\raylib\raylib-5.5_win64_msvc16\lib ^
  raylib.lib winmm.lib user32.lib gdi32.lib shell32.lib
