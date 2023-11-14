#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int printf_char(va_list val);
int printf_string(va_list val);
int print_37(void);
int _printf(const char *format, ...);
int _strlen(char *str);
int print_in(va_list arg);
int print_de(va_list arg);
<<<<<<< HEAD
int print_int(va_list args);
int print_dec(va_list args);
=======
int binary(int num);
int octal(int num);
int _MAX;
int _MIN;
>>>>>>> f5e6ce0425becaa2b55c2e37e03e65bda9df5c97

#endif
