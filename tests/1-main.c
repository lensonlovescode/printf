#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int num;
	char *str1, *str2;
	int length1, length2;

	length1 = _printf("Let's try to printf a simple sentence.\n");
	length2 = printf("Let's try to printf a simple sentence.\n");

	printf("length1 = %d\n", length1);
	printf("length2 = %d\n", length2);

	length1 = _printf("Character:[%c]\n", 'H');
	length2 = printf("Character:[%c]\n", 'H');

	printf("length1 = %d\n", length1);
	printf("length2 = %d\n", length2);

	length1 = _printf("Percent:[%%]\n");
	length2 = printf("Percent:[%%]\n");

	printf("length1 = %d\n", length1);
	printf("length2 = %d\n", length2);

	str1 = "This is string one";
	str2 = "This is string two";

	length1 = _printf("string: %s\n", str1);
	length2 = printf("string: %s\n", str2);

	printf("length of string 1: %d\n", length1);
	printf("length of string 2: %d\n", length2);

	num = 98;

	_printf("binary number: %b\n", num);

	return (0);
}
