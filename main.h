#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

typedef struct format
{
	char *id;
	int (*f)();
} match;

int _putchar(char c);
int printf_char(va_list val);
int printf_string(va_list val);
int print_37(void);
int _printf(const char *format, ...);
int _strlen(char *str);
int print_int(va_list args);
int print_dec(va_list args);
int binary(int num);
int octal(int num);
int _MAX;
int _MIN;

#endif
