#include "main.h"
/**
 * print_uint-Prints an unsigned integer in decimal format.
 * @args: argument list
 * Return: The number of characters printed successfully, or -1 on error.
 */
int print_uint(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	int digits[20] = {0};
	unsigned int digit_index = 0;
	int i;

	while (num > 0)
	{
		if (digit_index >= sizeof(digits) / sizeof(digits[0]))
		{
			return (-1);
		}
		digits[digit_index++] = num % 10;
		num /= 10;
	}
	for (i = digit_index - 1; i >= 0; i--)
	{
		_putchar(digits[i] + '0');
		count++;
	}
	return (count);
}
/**
 * print_octal - Prints an unsigned integer in octal format.
 * @args: argument list
 * Return: The number of characters printed successfully, or -1 on error.
 */
int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	int digits[20] = {0};
	unsigned int digit_index = 0;
	int i;

	while (num > 0)
	{
		if (digit_index >= sizeof(digits) / sizeof(digits[0]))
		{
			return (-1);
		}
		digits[digit_index++] = num % 8;
		num /= 8;
	}
	for (i = digit_index - 1; i >= 0; i--)
	{
		_putchar(digits[i] + '0');
		count++;
	}
	return (count);
}
/**
 * conditions - checks for specifyer prescence
 * @format: format string
 * @idx: index of the character to be checked
 * Return: returns 1 if idx is a specifyer, 0 if not
 */
int conditions(const char *format, int idx)
{
	if (!(format[idx] >= 'a' && format[idx] <= 'z') && format[idx] != ' '
	&& format[idx] != '%' && format[idx] != 'X')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
