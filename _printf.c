#include "main.h"
<<<<<<< HEAD

=======
>>>>>>> 9e2394dfe2ffba77a5acce43320b51ff3848e418
/**
 * _printf - function produces output according to a format
 * @format: character string
 * Return: output
 */
<<<<<<< HEAD

int _printf(const char *format, ...)
{
	int i, printed_chars = 0;
	va_list list_of_args;
	if (format == NULL)
		return -1;

=======
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list list_of_args;

	if (format == NULL)
		return (-1);
>>>>>>> 9e2394dfe2ffba77a5acce43320b51ff3848e418
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
<<<<<<< HEAD
				write(1, &c, 1);

=======

				write(1, &c, 1);
>>>>>>> 9e2394dfe2ffba77a5acce43320b51ff3848e418
				printed_chars++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(list_of_args, char*);
<<<<<<< HEAD
				int str_len = 0;
				while (str[str_len] != '\0')
					str_len++;

				write(1, str, str_len);
				printed_chars++ ; += str_len;
=======

				int str_len = 0;
				while (str[str_len] != '\0')
					str_len++;
				write(1, str, str_len);
				printed_chars += str_len;
>>>>>>> 9e2394dfe2ffba77a5acce43320b51ff3848e418
			}
		}
		format++;
	}
<<<<<<< HEAD
va_end(list_of_args);
return printed_chars;
=======
	va_end(list_of_args);
	return (printed_chars);
>>>>>>> 9e2394dfe2ffba77a5acce43320b51ff3848e418
}
