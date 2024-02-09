#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
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

	return (0);
}
