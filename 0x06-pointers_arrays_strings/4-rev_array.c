#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 *
 * OCT 19th 23
 * Ahmad Ali
 *
 */
void reverse_array(int *a, int n)
{
	int o, p, tmp;

	j = o - 1;

	for (o = 0; o < n / 2; o++)
	{
		tmp = a[o];
		a[o] = a[p];
		a[p--] = tmp;
	}
}
