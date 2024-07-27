#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int num1, num2, ui, err_num;
	char *str1, *str2;
	int length1, length2;

	err_num = 89;

	length1 = _printf("Let's try to printf a simple sentence without specifyer\n");
	length2 = printf("Let's try to printf a simple sentence without specifyer\n");

	printf("length one = %d\n", length1);
	printf("length two = %d\n", length2);

	length1 = _printf("Single character:[%c]\n error? : [%s]", 'H', err_num);
	length2 = printf("Single character:[%c]\n", 'H');

	printf("length one = %d\n", length1);
	printf("length two = %d\n", length2);

	length1 = _printf("Percent sign:[%%]\n");
	length2 = printf("Percent sign:[%%]\n");

	printf("length one = %d\n", length1);
	printf("length two = %d\n", length2);

	str1 = "This is string one";
	str2 = "This is string two";

	length1 = _printf("string: %s\n", str1);
	length2 = printf("string: %s\n", str2);

	printf("length one: %d\n", length1);
	printf("length two: %d\n", length2);

	num1 = 98;
	num2 = 1221;

	length1 = _printf("binary number 98 = %b\n", num1);
	length2 = _printf("binary number 1221 = %b\n", num2);

	printf("length one: %d\n", length1);
	printf("length two: %d\n", length2);

	ui = (unsigned int)INT_MAX + 1024;

	length1 = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	length2 = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

	printf("length one: %d\n", length1);
	printf("length two: %d\n\n", length2);

	_printf("End of test >>>\n\n");

	return (0);
}
