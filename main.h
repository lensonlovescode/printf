#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct format
{
	char *id;
	int (*f)(va_list args);
}format_struct;


int _printf(const char *format, ...);

int _putchar(char ch);
int print_str(va_list args);
int print_char(va_list args); // note for sharon - adjust the parameters for your functions
int print_int(const char *num); // <<--
int print_int_two(const char *num); // <<--
int _strlenc(const char *str);
int _strlen(char *str);

#endif
