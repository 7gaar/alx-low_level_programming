#include "main.h"

/**
 * binary_to_uint - a function that converts binary to int
 * @b: fjfjf
 * 
 * Return: fjkdjdk
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, power;
	int len;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (power = 1, num = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			num += power;
	}

	return (num);
}
