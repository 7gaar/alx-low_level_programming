#include "main.h"

/**
 * _pow_recursion -  a function that returns the value of x to the power of y
 * @x: num to be powered to y
 * @y: the power
 *
 * 0CT 25th 23
 * Ahmed Ali
 *
 * Return: @x to the power @y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
