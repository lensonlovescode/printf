#include "main.h"
/**
 * _putchar - Writes a character to the standard output
 * @ch: character to be printed
 * Return: returns 1;
 */
int _putchar(char ch)
{
	return (write(1, (const void *)&ch, 1));
}
/**
 * print_char - Prints a single character to the standard output.
 * @args: argument list
 * Return: The number of characters printed (always 1).
 */
int print_char(va_list args)
{
	char ch;

	ch = va_arg(args, int);

	_putchar(ch);
	return (1);
}
/**
 * print_str - Prints a null-terminated string to the standard output.
 * @args: the argument list
 * Return: The number of characters printed.
 */
int print_str(va_list args)
{
	int count;
	char *str;

	str = va_arg(args, char *);
	count = 0;

	if (str == NULL)
	{
		_printf("Error!");
		exit (100);
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
/**
 * print_percent - prints the percent sign
 * @args: argument list (unused)
 * Return: returns 1
 */
int print_percent(va_list args __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
/**
 * print_binary - Prints the binary representation of a number
 * @args: argument list
 * Return: length printed
 */
int print_binary(va_list args)
{
	unsigned int num;
	int length, size, bit, i, significant;

	size = sizeof(unsigned int) * 8;
	length = 0;
	significant = 0;
	num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = size - 1; i >= 0; i--)
	{
		bit = (num >> i) & 1;
		if (bit || significant)
		{
			_putchar(bit + '0');
			length++;
			significant = 1;
		}
	}
	return (length);
}

