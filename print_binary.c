#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned int.
 * @n: The unsigned int to be converted and printed.
 *
 * Return: The number of characters printed.
 */
int print_binary(unsigned int n)
{
	int count = 0;

	if (n >= 2)
	{
		count += print_binary(n / 2);
	}

	_putchar(n % 2 + '0');
	count++;

	return (count);
}
