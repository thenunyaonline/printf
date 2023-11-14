#include "main.h"
/**
 * _printf - function produces output according to a format
 * @format: identifier to look
 * Return: output
 */
int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", print_c}, {"%s", print_s}, {"%%", print_%},
	
}
