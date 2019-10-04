Course programming C++ (Part 1)
-------------------------------
## RTFM
- Read the Hints and Tips (HAT) document
- Read the Abbreviations document


## Style and layout
Try to automate most of these suggestions by editing settings in your editor of choice. If you work with a terminal, most programs have some `rc` file where you can edit these.

- All filenames should be lowercase without spaces
- All source files get extension `.cc`
- Header files get extension `.h` (might change this later to `.hh`?)
- Interal header files get extension `.ih`

- Indentation consists of 4 spaces
- Don't mix tabs and spaces
    - Most editors have a setting which converts a tab to an amount of spaces
- No lines should exceed 80 characters, this is a hard limit

## Build tools
- Use `icmake`
- Start a new project by running `icmstart -b`
- Edit your `icmconf` for more convenience
    - Choose correct compiler flags
    - Uncomment line ?? to not have to type `icmbuild program`
- Use the `makeclass` Perl script if you like
- Don't forget to add a new class to the CLASSES file

## 





