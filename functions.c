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
 *@param ch The character to be printed.
 * @return The number of characters printed (always 1).
 */
int print_char(va_list args)
{
	char ch;

	ch = va_arg(args, int);

	_putchar(ch);
	return (1);
}
/**
 * Prints a null-terminated string to the standard output.
 *
 * @param str The null-terminated string to be printed.
 * @return The number of characters printed.
 */
int print_str(va_list args)
{
	int count;
	char *str;

	str = va_arg(args, char *);
	count = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
int print_percent(va_list args __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
/**
 * print_int - Prints an integer to the standard output.
 * @param args The variable argument list containing the integer to be printed.
 * @return The number of characters printed successfully, or -1 on error.
 */
int print_int(va_list args) 
{
    int num = va_arg(args, int);
    int is_negative = 0; 
    if (num < 0) 
	{
        num = -num;
        is_negative = 1;
    }
	int count = 0; 
    int digits[20]; 
    int digit_index = 0;
	while (num > 0) 
	{
        if (digit_index >= sizeof(digits) / sizeof(digits[0])) 
		{
            return -1;
        }
        digits[digit_index++] = num % 10;
        num /= 10;
    }
    if (is_negative) 
	{
        _putchar('-');
        count++;
    }
    for (int i = digit_index - 1; i >= 0; i--) 
	{
        _putchar(digits[i] + '0');
        count++;
    }
	return count;
}
/**
 * print_int_two - Prints an integer to the standard output.
 * @param args The variable argument list containing the integer to be printed.
 * @return The number of characters printed successfully, or -1 on error.
 */
int print_int_two(va_list args) 
{
    int num = va_arg(args, int);
    int is_negative = 0; 
	if (num < 0)
	{
        num = -num;
        is_negative = 1;
    }
	int count = 0; 
    int digits[20]; 
    int digit_index = 0;
	while (num > 0) 
	{
        if (digit_index >= sizeof(digits) / sizeof(digits[0])) 
		{
            return -1;
        }
        digits[digit_index++] = num % 10;
        num /= 10;
    }
    if (is_negative) 
	{
        _putchar('-');
        count++;
    }
    for (int i = digit_index - 1; i >= 0; i--) 
	{
        _putchar(digits[i] + '0');
        count++;
    }
	return count;
}
/**
 * print_uint-Prints an unsigned integer to the standard output in decimal format.
 * @param args The variable argument list containing the unsigned integer to be printed.
 * @return The number of characters printed successfully, or -1 on error.
 */
int print_uint(va_list args)
 {
    unsigned int num = va_arg(args, unsigned int);
    int count = 0;
    int digits[20]; 
    int digit_index = 0;

    while (num > 0) 
	{
        if (digit_index >= sizeof(digits) / sizeof(digits[0])) 
		{
            return -1; 
        }
        digits[digit_index++] = num % 10;
        num /= 10;
    }
    for (int i = digit_index - 1; i >= 0; i--)
	 {
        _putchar(digits[i] + '0');
        count++;
    }
	return count;
}
/**
 * Print_octal-Prints an unsigned integer to the standard output in octal format.
 * @param args The variable argument list containing the unsigned integer to be printed.
 * @return The number of characters printed successfully, or -1 on error.
 */
int print_octal(va_list args) 
{
    unsigned int num = va_arg(args, unsigned int);
    int count = 0;
    int digits[20]; 
    int digit_index = 0;

    while (num > 0) 
	{
         if (digit_index >= sizeof(digits) / sizeof(digits[0])) 
		{
            return -1; 
        }
        digits[digit_index++] = num % 8; 
        num /= 8;
    }
    for (int i = digit_index - 1; i >= 0; i--) 
	{
        _putchar(digits[i] + '0');
        count++;
    }
	return count;
}
