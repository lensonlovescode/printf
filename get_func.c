#include "main.h"
/**
 * get_func - calls the appropriate function according to specifyer
 * @args: the list of arguments
 * @index: this is the index where the specifyer lies in the format string
 * Return: this returns the length of the string printed
 *
 */
int get_func(const char *format_str, va_list args, int index)
{
	format_struct format_var[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int_two}
	};
	int j;
	int length;

	j = 0;

	while (j < 4)
	{
		if (format_var[j] == format_str[index])
		{
			length += format_var[j].f(args);
		}
	}
	return (length);
}
