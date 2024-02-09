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
 * print_int - prints an integer
 * @num: the integer to be printed
 * Return: number of characters printed
 */
/**int print_int(const char *num)
{
	int count;

	count = 0;
	int value = atoi(num);
	//use putchar to print the integer then increment cunt
	return (count);
}
*/
/**
 * print_int_two - prints an integer
 * @num: the integer to be printed
 * Return: number of characters printed
 */
/*int print_int_two(const char *num)
{
	int count;

	count = 0;
	int value = atoi(num);
	//use putchar to print integer then increment count
	return (count);


}*/
