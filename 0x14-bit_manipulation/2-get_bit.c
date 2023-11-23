#include "main.h"

/**
 * get_bit - fhfjdf
 * @n: kfjdkf
 * @index: fkdjf
 *
 * Return: fkdjkdkvjfdk
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else if ((n >>= index) & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
