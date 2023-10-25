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
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	int mid = n / 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (_sqrt_recursion(mid - 1));
	}
	else
	{
		return (_sqrt_recursion(mid + 1));
	}
}
