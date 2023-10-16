#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 *
 * Oct 16th 23
 * Ahmad Ali
 *
 * @a: int to check
 * @n: int to check
 * Return: 0 is success
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
		if (k != n - 1)
		printf("%d, ", a[k]);
		else
			printf("%d", a[k]);
	printf("\n");
}
