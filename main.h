#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int printf_char(va_list val);
int printf_string(va_list val);
int print_37(void);
int _printf(const char *format, ...);
int _strlen(char *str);
int _strlenc(const char *str);
int print_in(va_list arg);
int print_de(va_list arg);

#endif
