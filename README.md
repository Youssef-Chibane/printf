# PRINTF

This is the first ALX team project where we try to recreate the C library function `int _printf(const char *format, ...)` using the knowledge we gained from the previous tasks.
## Screenshots

![App Screenshot](https://i.imgur.com/RebjvOk.png)
## WHAT IS PRINTF

A function that produces output according to a format. It takes one or multiple parameters with the help of the variadic functions that we used while implementing our own printf.

The first parameter is the format, the string that contains the text to be written to stdout. It can optionally contain embedded format tags that are replaced by the values specified in subsequent additional arguments and formatted as requested.

The second one is the ellipsis (or the three dots ... ) Depending on the format string, the function may expect a sequence of additional arguments, each containing one value to be inserted instead of each %-tag specified in the format parameter (if any). There should be the same number of these arguments as the number of %-tags that expect a value.

For the return value, if successful, the total number of characters written is returned. On failure, we return -1.

## FORMATS WE HANDLED

- c: Character
- s: String of characters
- %: The % character
- d and i: Signed decimal integer
- b: The unsigned int argument is converted to binary
- u: Unsigned decimal integer
- o: Signed octal
- x: Unsigned hexadecimal integer
- X: Unsigned hexadecimal integer (capital letters)
- S: Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
- r: Prints the reversed string
- R: Prints the rot13'ed string
## Authors

- [Youssef Chibane](https://github.com/Youssef-Chibane) && [Mohammed Lagrini](https://github.com/Suigetsu)
