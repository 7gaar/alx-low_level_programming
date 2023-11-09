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
	if (separator == 0)
		separator = "";

	for (i = 0; i < n; i++)
	{
		x = va_arg(aloom, char *);
		if (x == 0)
			x = "(nil)";
		printf("%s", x);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(aloom);
}
