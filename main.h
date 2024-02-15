#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

typedef struct format
{
	char id;
	int (*f)(va_list args);
}format_struct;


int _printf(const char *format, ...);
int get_func(const char *format_str, va_list args, int index);

int _putchar(char ch);
int print_str(va_list args);
int print_char(va_list args);
int print_percent(va_list args __attribute__((unused)));
int print_binary(va_list args);
int print_hexa(va_list args);
int print_hexa_upper(va_list args);
int get_significant_digits(unsigned int num);
/**int print_int(const char *num);
int print_int_two(const char *num);**/
int print_int_two(va_list args);
int print_int(va_list args);
int print_uint(va_list args);
int print_octal(va_list args);
int _strlenc(const char *str);
int _strlen(char *str);

#endif
