#include "main.h"

/**
 * handle_format_specifier - Handle the given format specifier.
 * @specifier: The format specifier character.
 * @args: The va_list of arguments.
 *
 * Return: The number of characters printed for this specifier.
 */
int handle_format_specifier(char specifier, va_list args)
{
	switch (specifier)
	{
	case 'c':
		return (_putchar(va_arg(args, int)));
	case 's':
		return (print_string(va_arg(args, char *)));
	case '%':
		_putchar('%');
		return (1);
	default:
		_putchar('%');
		_putchar(specifier);
		return (2);
	}
}
