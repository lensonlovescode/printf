#include "main.h"
/**
 * _printf - this prints according to a specified format
 * @format: this is the format string
 * @...: this are the unknown arguments
 * Return: this returns the length of the string printed
 */
int _printf(const char *format, ...)
{
	int i;
	int idx;
	int length;
	va_list args;

	i = 0;
	idx = i + 1;
	va_start(args, format);
	
	while (format[i] != '\0')
	{
		if (format[i] == "%")
		{
			while (!(format[idx] >= 'a' && format[idx] <= 'z'))
			{
				idx++;
			}
			length += get_func(format, args, (idx));
		}
		_putchar(format[i]);
		length++;
		i++;
	}

	return (length);
}
