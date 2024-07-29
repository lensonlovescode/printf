#include "main.h"
/**
 *
 *
 *
 *
 *
 */
int main()
{
	char *str = "A big string\n";
	_printf("Let's print a simple sentence\n");
	_printf("%c\n", 'S');
	_printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("Let's see if the cast is correctly done: %c. Did it work?\n", 48);
	_printf("%s", "This sentence is retrieved from va_args!\n");
	_printf("Complete the sentence: You %s nothing, jon snow.\n", "Know");
	_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c\n", 'W', 'i', "some", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	_printf("%%");
	_printf("Should print a single percent sign: %%\n");
	_printf("%s%c%c%c%s%%%s%c", "Loading ", ',', '.', '.', "99", " Please wait", '\n');
	_printf("css%ccs%scscscs\n", 'T', "Test");
	_printf("%c\n");
	printf("Success!\n");
	_printf("%!\n");
	printf("Success!\n");
	_printf("%");
	printf("Success!\n");
	_printf(str);
	printf("Success!\n");
	_printf("man gcc:\n%s", str);
	printf("Success!\n");
	_printf("%c", '\0');
	printf("Success!\n");
	_printf(NULL);
	printf("Success!\n");
	return (0);
}
