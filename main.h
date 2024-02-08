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
	int (*f)(const char *);
}format_struct;


int _printf(const char *format, ...);

int _putchar(char ch);
int print_str(const char *str);
int print_char(const char *c);
int print_int(const char *num);
int print_int_two(const char *num);
int _strlenc(const char *str);
int _strlen(char *str);

#endif
