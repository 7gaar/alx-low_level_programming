#include "main.h"

/**
 * _sqrt_recursion - a function return the natural square root of a number.
 * @n: number
 *
 * OCT 25th 23
 * Ahmed Ali
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - finds the square root
 * @n: integer
 * @i: helping integer
 * Return: squre rooot
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
