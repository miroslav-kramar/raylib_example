# raylib example

Ukázka/šablona malého programu v C s použitím knihovny raylib. V rámci zachování jednoduchosti je předkompilovaná knihovna raylib 5.5 již součástí repozitáře.

Užitečné odkazy:
- [hlavní stránka raylib](https://www.raylib.com/)
- [raylib GitHub](https://github.com/raysan5/raylib)

## Co s šablonou dělat?

Zkopírujte si `template` nebo `example_app` složku, nebo pracujte přímo v nich. Kód slouží pouze jako ukázka, můžete ho libovolně měnit.

## Jak program zkompilovat a pustit?

> [!WARNING]
> Build skripty pro kompilaci obsahují relativní cesty a bez úpravy přestanou fungovat, pokud nezachováte přesnou souborovou strukturu.
> Složka aplikace (`template`, `example_app`, ...) se musí nacházet na stejné úrovni, jako složka s knihovnou `raylib`. V opačném případě musíte změnit relativní cesty ve skriptech.

### Platforma GNU/Linux (kompilátor GCC)

Nejdřív se ujistěte, že build skript je spustitelný. Poté ho spusťte:

```bash
$ chmod 755 build_linux.sh
$ ./build_linux.sh
$ ./main.elf
```

### Platforma Windows (kompilátor MSVC)

Musíte mít nainstalované Visual Studio 2022 (nebo jiné). Otevřte konzoli `x64 Native Tools Command Prompt for VS 2022` (nebo podobnou v závislosti na verzi) a přesuňte se do pracovního adresáře. Poté pusťte build skript (`.bat`):

```
> build_win_msvc.bat
> main.exe
```

### Windows (MinGW)

Zdá se, že staré dobré MinGW má bohužel problém s kompilací programu. Jako alternativu můžete prozatím zvolit MSVC nebo se přesunout na platformu Linux :-D.
