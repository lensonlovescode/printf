#include "main.h"
/**
 * print_hexa - Prints the hexadecimal in lowercase.
 * @args: The va_list containing the unsigned int to be printed.
 *
 * Return: The number of characters printed.
 */
int print_hexa(va_list args)
{
	unsigned int num;
	int length, significant_digits, bit, i;

	num = va_arg(args, unsigned int);
	length = 0;
	significant_digits = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	significant_digits = get_significant_digits(num);

	for (i = (significant_digits - 1) * 4; i >= 0; i -= 4)
	{
		bit = (num >> i) & 0xF;
		if (bit < 10)
		{
			_putchar(bit + '0');
		}
		else
		{
			_putchar(bit - 10 + 'a');
		}
		length++;
	}
	return (length);
}

/**
 * print_hexa_upper - Prints the hexadecimal in uppercase.
 * @args: The va_list containing the unsigned int to be printed.
 *
 * Return: The number of characters printed.
 */
int print_hexa_upper(va_list args)
{
	unsigned int num;
	int length, significant_digits, bit, i;

	num = va_arg(args, unsigned int);
	length = 0;
	significant_digits = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	significant_digits = get_significant_digits(num);
	for (i = (significant_digits - 1) * 4; i >= 0; i -= 4)
	{
		bit = (num >> i) & 0xF;
		if (bit > 9)
		{
			_putchar(bit + 'A' - 10);
		}
		else
		{
			_putchar(bit + '0');
		}
		length++;
	}
	return (length);
}

/**
 * get_significant_digits - Get the number of significant digits
 * @num: The number to check
 *
 * Return: The number of significant digits
 */
int get_significant_digits(unsigned int num)
{
	int digits = 0;

	while (num > 0)
	{
		num >>= 4;
		digits++;
	}
	return (digits);
}
/**
 * print_int - Prints an integer to the standard output.
 * @args: argument list
 * Return: The number of characters printed successfully, or -1 on error.
 */
int print_int(va_list args)
{
	int num = va_arg(args, int);
	int is_negative = 0;
	int count = 0;
	int digits[20] = {0};
	unsigned int digit_index = 0;
	int i;

	if (num < 0)
	{
		num = -num;
		is_negative = 1;
	}
	while (num > 0)
	{
		if (digit_index >= sizeof(digits) / sizeof(digits[0]))
		{
			return (-1);
		}
		digits[digit_index++] = num % 10;
		num /= 10;
	}
	if (is_negative)
	{
		_putchar('-');
		count++;
	}
	for (i = digit_index - 1; i >= 0; i--)
	{
		_putchar(digits[i] + '0');
		count++;
	}
	return (count);
}
/**
 * print_int_two - Prints an integer to the standard output.
 * @args: The variable argument list containing the integer to be printed.
 * Return: The number of characters printed successfully, or -1 on error.
 */
int print_int_two(va_list args)
{
	int num = va_arg(args, int);
	int is_negative = 0;
	int count = 0;
	int digits[20];
	unsigned int digit_index = 0;
	int i;

	if (num < 0)
	{
		num = -num;
		is_negative = 1;
	}
	while (num > 0)
	{
		if (digit_index >= sizeof(digits) / sizeof(digits[0]))
		{
			return (-1);
		}
		digits[digit_index++] = num % 10;
		num /= 10;
		}
		if (is_negative)
		{
			_putchar('-');
			count++;
		}
		for (i = digit_index - 1; i >= 0; i--)
		{
			_putchar(digits[i] + '0');
			count++;
		}
		return (count);
}
