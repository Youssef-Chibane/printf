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
	case 'd':
	case 'i':
		return (print_number(va_arg(args, int)));
	case 'b':
		return (print_binary(va_arg(args, unsigned int)));
	case 'u':
		return (print_unsigned_number(va_arg(args, unsigned int)));
	case 'o':
		return (print_octal(va_arg(args, unsigned int)));
	case 'x':
		return (print_hexadecimal(va_arg(args, unsigned int), 0));
	case 'X':
		return (print_hexadecimal(va_arg(args, unsigned int), 1));
	default:
		_putchar('%');
		_putchar(specifier);
		return (2);
	}
}
