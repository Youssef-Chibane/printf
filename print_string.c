#include "main.h"

/**
 * print_string - Prints a null-terminated string.
 * @str: The string to be printed.
 *
 * Return: The number of characters printed.
 */

int print_string(char *str)
{
	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
