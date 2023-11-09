#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: string to be printed between nums
 * @n: number of integers
 *
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 1; i <= n; i++)
	{
		if (i == n)
		{
			printf("%d\n", va_arg(nums, int));
		}
		if (separator != 0)
		{
			printf("%d", va_arg(nums, int));
			printf("%s", separator);
		}
		if (separator == 0)
		{
			printf("%d", va_arg(nums, int));
		}
	}
}
