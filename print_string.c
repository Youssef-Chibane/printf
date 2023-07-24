#include "main.h"

/**
 * print_string - Prints a null-terminated string.
 * @str: The string to be printed.
 *
 * Return: The number of characters printed.
 */

int print_string(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		_putchar(str[i++]);
	}
	return (i);
}
