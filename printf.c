#include "main.h"
/**
 * _printf - this prints according to a specified format
 * @format: this is the format string
 * @...: this are the unknown arguments
 * Return: this returns the length of the string printed
 */
int _printf(const char *format, ...)
{
	format_struct format_var[] = {
		{"%c", print_char},
		{"%s", print_str}
	};

	const char *current;
	int j;
	int i;
	va_list args;
	int length;

	i = 0;
	j = 0;
	length = 0;
	va_start(args, format);

	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
	{
		return (0);
	}

	

	return (length);
}
