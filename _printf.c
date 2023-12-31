#include "main.h"
/**
 * _printf - function produces output according to a format
 * @format: identifier to look
 * Return: output
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list list_of_args;

	if (format == NULL)
		return (-1);

	va_start(list_of_args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			printed_chars++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				printed_chars++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(list_of_args, int);

				write(1, &c, 1);
				printed_chars++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(list_of_args, char*);
				int str_len = 0;

				while (str[str_len] != '\0')
					str_len++;

				write(1, str, str_len);
				printed_chars += str_len;
			}
			else if (*format == 'd')
			{
				write(1, format, 1);
				printed_chars++;
			}
			else if (*format == 'i')
			{
				write(1, format, 1);
				printed_chars++;
			}
		}

		format++;
	}
	va_end(list_of_args);

	return (printed_chars);
}
