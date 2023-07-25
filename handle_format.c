#include "main.h"

/**
 * handle_format_specifier - Handle the given format specifier.
 * @specifier: The format specifier character.
 * @args: The va_list of arguments.
 *
 * Return: The number of characters printed for this specifier.
 */

int	handle_format_specifier(char specifier, va_list args)
{
	if (specifier == 'c')
		return (_putchar(va_arg(args, int)));
	else if (specifier == 's')
		return (print_string(va_arg(args, char *)));
	else if (specifier == '%')
		return (_putchar('%'));
	else if (specifier == 'd' || specifier == 'i')
		return (print_number(va_arg(args, int)));
	else if (specifier == 'b')
		return (print_binary(va_arg(args, unsigned int)));
	else if (specifier == 'u')
		return (print_unsigned_number(va_arg(args, unsigned int)));
	else if (specifier == 'o')
		return (print_octal(va_arg(args, unsigned int)));
	else if (specifier == 'x')
		return (print_hexadecimal(va_arg(args, unsigned int), 0));
	else if (specifier == 'X')
		return (print_hexadecimal(va_arg(args, unsigned int), 1));
	else if (specifier == 'S')
		return (print_npc(va_arg(args, char *)));
	else if (specifier == 'p')
		return (putadrs(va_arg(args, unsigned long)));
	_putchar('%');
	_putchar(specifier);
	return (2);
}
