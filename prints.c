#include "main.h"

/**
 * printf_string - prints string
 * @val: argument
 * @Return: lenght of string
 */

int printf_string(va_list val)
{
	char *str;
	int i;
	int lenght;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(NULL)";
		lenght = _strlen(str);
		for (i = 0; i < lenght; i++)
			_putchar(str[i]);
		return (lenght);
	}
	else
	{
		lenght = _strlen(str);
		for (i = 0; i < lenght; i++)
			_putchar(str[i]);
		return (lenght);
	}
}
