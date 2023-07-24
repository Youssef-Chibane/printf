#include "main.h"

/**
 * print_string - Prints a null-terminated string.
 * @str: The string to be printed.
 *
 * Return: The number of characters printed.
 */

int print_string(const char *str)
{
	int count = 0;

	if (str)
	{
	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	}
	else
	{
	const char *null_str = "(null)";

	while (*null_str)
	{
		_putchar(*null_str);
		null_str++;
		count++;
	}
	}
	return (count);
}
