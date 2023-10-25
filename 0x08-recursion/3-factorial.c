#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: a number that its factorial will be calc.
 *
 * OCT 25TH 23
 * Ahmed Ali
 */ 
int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}	
