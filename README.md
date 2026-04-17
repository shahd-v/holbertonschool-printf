# C - printf

## Description
This project is a custom implementation of the C standard library
function printf, called _printf.
It produces output according to a format string and handles
multiple conversion specifiers.

## Compilation
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c

## Usage
#include "main.h"

_printf("Hello %s\n", "Name");
_printf("Number: %d\n", 42);
_printf("Character: %c\n", 'A');
_printf("Percent: %%\n");

## Conversion Specifiers
| Specifier | Description                  |
|-----------|------------------------------|
| %c        | Prints a single character    |
| %s        | Prints a string              |
| %d        | Prints a decimal integer     |
| %i        | Prints an integer            |
| %%        | Prints a literal percent sign|

## Files
| File         | Description                        |
|--------------|------------------------------------|
| main.h       | Header file with all prototypes    |
| _printf.c    | Main printf function               |
| helper.c     | Helper functions                   |
| man_3_printf | Man page for _printf               |

## Authors
- Shahd Faisal
- Alotaibi Abdulaziz
