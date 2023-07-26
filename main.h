#ifndef MAIN_H
# define MAIN_H

# define BUFFER_SIZE 1024

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		_printf(const char *format, ...);
int		handle_format_specifier(char specifier, va_list args);
int		_putchar(char c);
int		print_string(char *str);
void	print_number_recursive(int n, int *count);
int		print_number(int n);
int		print_binary(unsigned int n);
int		print_unsigned_number(unsigned int n);
int		print_octal(unsigned int n);
int		print_hexadecimal(unsigned int n, int uppercase);
int		print_npc(char *str);
int		rot13(char *str);
int		rev_str(char *str);

#endif
