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
	int result;
	int idx;
	int length;
	va_list args;
	/**
	char buffer[1024];
	int buffer_size;
	*/
	if (format == NULL)
	{
		return (-1);
	}

	i = 0;
	idx = i + 1;
	length = 0;
	va_start(args, format);


	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			idx = i + 1;
			while (conditions(format, idx) == 0)
			{
				if (format[idx] == '\0')
				{
					return (-1);
				}
				idx++;
			}
			result = get_func(format, args, (idx));
			if (result == -1)
			{
				return (-1);
			}
			length += result;
			i = idx + 1;
			/**
			buffer_index = length + 1;
			*/
		}
		else
		{
			_putchar(format[i]);
			/**
			buffer[i] = format[i];
			*/
			length++;
			i++;
		}
	}
	/**
	write(1, buffer, buffer_index);
	*/
	return (length);
}
