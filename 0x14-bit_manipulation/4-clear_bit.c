#include "main.h"

/**
 * clear_bit - fhjfh
 * @n: fdjkf
 * @index: jfkjdkjf
 *
 * Return: kkfkfjkjf
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int hold;

	if (index > 64)
		return (-1);
	hold = index;
	for (i = 1; hold > 0; i *= 2, hold--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
