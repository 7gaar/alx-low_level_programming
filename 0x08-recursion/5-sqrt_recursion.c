#include "main.h"

/**
 * _sqrt_recursion - a function returns the natural square root of a number.
 * @n: num that its square root will be found
 *
 * OCT 25th 23
 * Ahmed Ali
 *
 * Return: square root of @n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion:wq
 *
 * @n: integer paramtr
 * @l: integer parameter
 * Return: square root
 */
int _sqrt(int n, int l)
{
	if (n < 0)
		return (-1);
	if ((l * l) > n)
		return (-1);
	if (l * l == n)
		return (l);
	return (_sqrt(n, l + 1));
}
