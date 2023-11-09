#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list my_nums;

	va_start (my_nums, n);

	if (n == 0)
	{
		return (0);
	}

	for ( i = 0; i < n; i++)
	{
		result += va_arg(my_nums, int);
	}
	va_end(my_nums);
	return (result);
}
