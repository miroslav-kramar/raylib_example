# raylib example

Self-contained small raylib example project structure. Precompiled raylib 5.5 library is bundled since ease of use is the top priority.

Useful links:
- [raylib website](https://www.raylib.com/)
- [raylib GitHub](https://github.com/raysan5/raylib)

## What to do?

Copy the template or example directory, or work directly in either of them. Alter the main.c file as you please.

## How to run?

> [!WARNING]
> You must maintain strict directory structure. The build script's parent directory must be located in the same directory as the `raylib` directory. Any other way and the build scripts will not work.

### Linux (GCC)

First make sure the build script inside the directory is executable. Then run it.

```bash
$ chmod 755 build_linux.sh
$ ./build_linux.sh
```

### Windows (MSVC)

You must have Visual Studio installed. Open the `x64 Native Tools Command Prompt for VS 2022` (or similar depending on the version) and navigate to the working directory. Then execute the batch file.

```
> build_win_msvc.bat
```

### Windows (MinGW)

Good old MinGW seems to have some problems compiling the program. Just install MSVC or switch to Linux for now :-D.