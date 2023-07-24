#include "main.h"

/**
 * print_number_recursive - Prints an integer recursively.
 * @n: The integer to be printed.
 * @count: A pointer to an integer to keep
 * track of the count of characters printed.
 */
void print_number_recursive(int n, int *count)
{
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		*count += 2;
		print_number_recursive(147483648, count);
	}
	else if (n < 0)
	{
		_putchar('-');
		*count += 1;
		print_number_recursive(-n, count);
	}
	else if (n >= 10)
	{
		print_number_recursive(n / 10, count);
		_putchar(n % 10 + '0');
		*count += 1;
	}
	else
	{
		_putchar(n + '0');
		*count += 1;
	}
}

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_number(int n)
{
	int count = 0;

	print_number_recursive(n, &count);
	return (count);
}
