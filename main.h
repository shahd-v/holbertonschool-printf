#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int print_binary(unsigned int n);
int _printf(const char *format, ...);
int print_int(int n);
int print_char(char c);
int print_string(char *str);
int handle_specifier(const char *format, int i, va_list args);
int _putchar(char c);

#endif
