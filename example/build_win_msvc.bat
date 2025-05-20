cl main.c /I ..\raylib\raylib-5.5_win64_msvc16\include /MD /Feapp.exe ^
  /link /LIBPATH:..\raylib\raylib-5.5_win64_msvc16\lib ^
  raylib.lib winmm.lib kernel32.lib user32.lib gdi32.lib shell32.lib ole32.lib
