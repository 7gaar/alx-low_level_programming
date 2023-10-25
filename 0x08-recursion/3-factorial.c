#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: a number that its factorial will be calc.
 *
 * OCT 25TH 23
 * Ahmed Ali
 *
 * Return: returns the factorial of a positive num, if n = 0 it returns 1
 * if n < 0 it returns -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
