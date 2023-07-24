#include "main.h"

/**
 * print_unsigned_number - Print an unsigned integer.
 * @n: The unsigned integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_unsigned_number(unsigned int n)
{
	int count = 0;

	if (n >= 10)
	{
		count += print_unsigned_number(n / 10);
	}

	_putchar(n % 10 + '0');
	count++;

	return (count);
}

/**
 * print_octal - Print an unsigned integer in octal format.
 * @n: The unsigned integer to be printed in octal.
 *
 * Return: The number of characters printed.
 */
int print_octal(unsigned int n)
{
	int count = 0;

	if (n >= 8)
	{
		count += print_octal(n / 8);
	}

	_putchar(n % 8 + '0');
	count++;

	return (count);
}

/**
 * print_hexadecimal - Print an unsigned integer in hexadecimal format.
 * @n: The unsigned integer to be printed in hexadecimal.
 * @uppercase: Whether to use uppercase letters (1) or not (0).
 *
 * Return: The number of characters printed.
 */
int print_hexadecimal(unsigned int n, int uppercase)
{
	int count = 0;
	char hexDigits[] = "0123456789abcdef";

	if (uppercase)
	{
		hexDigits[10] = 'A';
		hexDigits[11] = 'B';
		hexDigits[12] = 'C';
		hexDigits[13] = 'D';
		hexDigits[14] = 'E';
		hexDigits[15] = 'F';
	}

	if (n >= 16)
	{
		count += print_hexadecimal(n / 16, uppercase);
	}

	_putchar(hexDigits[n % 16]);
	count++;

	return (count);
}

