#include "main.h"
/**
 * _printf - function produces output according to a format
 * @format: identifier to look
 * Return: output
 */
int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char}, {"%s", printf_string}, {"%%", print_37}, {"%d", print_dec}, {"%i", print_int}
	};

	va_list args;
	int a =	0, len = 0;
	int b;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[a] = '\0')
	{
		b = 13;
		while (b >= 0)
		{
			if (m[b].id[0] == format[a] && m[b].id[1] == format[a + 1])
			{
				len = len + m[b].f(args);
				a = a + 2;
				goto Here;
			}
			b--;
		}
		_putchar(format[a]);
		a++;
		len++;
	}
	va_end(args);
	return (len);
}
