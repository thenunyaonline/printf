#include "main.h"
#include <stdio.h>

/**
 * _strlen - function calculates length of string
 * @str: string
 * Return: length of string
 */

int _strlen(char *str)
{
	int i;
	int count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	return (count);
}
