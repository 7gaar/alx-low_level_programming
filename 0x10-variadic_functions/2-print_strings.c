#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @separator: string
 * @n: number of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *x;
	unsigned int i;
	va_list aloom;


	va_start(aloom, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(aloom, char *);
		if (!x)
			x = "(nil)";
		if (!separator)
			printf("%s", x);
		else if (separator && i == 0)
			printf("%s", x);
		else
			printf(" %s%s", separator, x);
	}
	printf("\n");

	va_end(aloom);
}
