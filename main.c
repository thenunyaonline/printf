#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main()
{
        _printf("Sun\n");
        _printf("%c\n", 'u');
        _printf("%s\n", "string");
        _printf("%%\n");
	_printf("%d\n", 42);
	_printf("%i\n", 7);
        return (0);
}
