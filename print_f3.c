#include "main.h"

/**
 * rot13 - Encodes a string using the ROT13 cipher.
 *
 * @str: The input string to be encoded.
 *
 * Return: The number of characters printed.
 */

int rot13(char *str)
{
	int i = 0;
	int counter = 0;

	if (!str)
		return (print_string("(null)"));

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			counter += _putchar(((str[i] - 'a' + 13) % 26) + 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			counter += _putchar(((str[i] - 'A' + 13) % 26) + 'A');
		else
			counter += _putchar(str[i]);

		i++;
	}

	return (counter);
}

