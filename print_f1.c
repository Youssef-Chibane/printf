#include "main.h"

/**
 * _putchar - Writes a character to the standard output (file descriptor 1).
 * @c: The character to be written.
 *
 * Return: On success, 1 is returned. On error, -1 is returned.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
		str = "(null)";
	}

	int i = 0;

	while (str[i] = '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

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

