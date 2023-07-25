#include "main.h"

/**
 * _printf - Custom implementation of printf function.
 * @format: The format string.
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	int char_count = 0;
	va_list args;

	va_start(args, format);
	if (!format || !format[0])
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;

			char_count += handle_format_specifier(*format, args);
			format++;
		}
		else
		{
			_putchar(*format);
			format++;
			char_count++;
		}
	}
	va_end(args);
	return (char_count);
}

#include <stdio.h>

int main()
{
	int	i;
	int	j;

	i = _printf("%2");
    j = printf("%3");

	printf("******\n_ return: %d\n p return: %d\n****", i, j);
}