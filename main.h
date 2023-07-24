#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	_printf(const char *format, ...);
int 	_putchar(char c);
int 	print_string(char *str);
void 	print_number_recursive(int n, int *count);
int 	print_number(int n);
int 	print_binary(unsigned int n);

#endif
