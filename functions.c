#include "main.h"
/**
 * Writes a character to the standard output
 */
int _putchar(char ch)
{
        return (write(1, (const void *)&ch, 1));
}
/**
 * Prints a single character to the standard output.
 *
 * @param ch The character to be printed.
 * @return The number of characters printed (always 1).
 */
int print_char(const char *c)
{
	char ch;

	ch = *c;

	_putchar(ch);
	return (1);
}
/**
 * Prints a null-terminated string to the standard output.
 *
 * @param str The null-terminated string to be printed.
 * @return The number of characters printed.
 */
int print_str(const char *str)
{
	int count;

	count = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}

