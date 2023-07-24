#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	_putchar(char c);
int	print_string(const char *str);
int	print_number(int n);
int 	print_unsigned_decimal(unsigned int num);
int	print_octal(unsigned int n);
int	print_hexadecimal(unsigned int n, int uppercase);
int	handle_format_specifier(char specifier, va_list args);
int	_printf(const char *format, ...);
int	print_binary(unsigned int n);

#endif
