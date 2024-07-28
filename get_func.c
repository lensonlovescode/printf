#include "main.h"
/**
 * get_func - calls the appropriate function according to specifyer
 * @format_str: the format string
 * @args: the list of arguments
 * @index: this is the index where the specifyer lies in the format string
 * Return: this returns the length of the string printed
 *
 */
int get_func(const char *format_str, va_list args, int index)
{
	format_struct format_var[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_percent},
		{'b', print_binary},
		{'x', print_hexa},
		{'X', print_hexa_upper},
		{'d', print_int},
		{'i', print_int_two},
		{'u', print_uint},
		{'o', print_octal }
	};
	int j;
	int length;

	if (format_str == NULL)
	{
		return (-1);
	}

	j = 0;
	length = 0;

	while (j < 10)
	{
		if (format_var[j].id == format_str[index])
		{
			length += format_var[j].f(args);
			break;
		}
		j++;
	}
	return (length);
}
