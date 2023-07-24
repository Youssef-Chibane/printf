#include "main.h"

/**
 * print_hexadecimal - Prints the hexadecimal
 * representation of an unsigned integer.
 * @n: The unsigned integer to be printed
 * in hexadecimal format.
 * @uppercase: A flag indicating whether to use
 * uppercase characters (A-F) for hex digits.
 *
 * Return: The number of characters printed.
 */
int print_hexadecimal(unsigned int n, int uppercase)
{
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		char buffer[12];
		int i = 0;
		char hex_chars_lower[] = "0123456789abcdef";
		char hex_chars_upper[] = "0123456789ABCDEF";
		char *hex_chars = uppercase ? hex_chars_upper : hex_chars_lower;

		while (n != 0)
		{
			buffer[i] = hex_chars[n % 16];
			n /= 16;
			i++;
		}

		for (i = i - 1; i >= 0; i--)
		{
			_putchar(buffer[i]);
			count++;
		}
	}
	return (count);
}

/**
 * print_octal - Prints the octal representation of an unsigned integer.
 * @n: The unsigned integer to be printed in octal format.
 *
 * Return: The number of characters printed.
 */
int print_octal(unsigned int n)
{
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		char buffer[12];
		int i = 0;

		while (n != 0)
		{
			buffer[i] = (n % 8) + '0';
			n /= 8;
			i++;
		}
		for (i = i - 1; i >= 0; i--)
		{
			_putchar(buffer[i]);
			count++;
		}
	}
	return (count);
}

/**
 * print_unsigned_int - Prints an unsigned int.
 * @n: The unsigned int to be printed.
 *
 * Return: The number of characters printed.
 */

int print_unsigned_int(unsigned int n)
{
	int count = 0;

	count += print_number(n);

	return (count);
}


