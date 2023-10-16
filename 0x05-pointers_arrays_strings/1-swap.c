#include <stdio.h>
/**
 * main - Write a function that swaps the values of two integers.
 *
 * swap_int - a function that swaps the values of two integers.
 * @a: a variable that will be updated
 * @b: a variable that will be updated
 *
 * OCT 10th 2023
 * Ahmad Ali
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int l;

	l = *a;
	*a = *b;
	*b = l;
}
