#include "main.h"

/**
 * set_bit - jkfdfj
 * @n: fjkfj
 * @index: kfjdkkf
 *
 * Return: dkfjdkf
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp;

	if (index > 64)
	{
		return (-1);
	}
	for (tmp = 1; index > 0; index--, tmp *= 2)
		;
	*n += tmp;
	return (1);
}
