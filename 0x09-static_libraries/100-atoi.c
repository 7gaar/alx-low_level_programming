#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: pointer to convert
 *
 * OCT 16th 23
 * Ahmad Ali
 *
 * Return: An integer.
 */
int _atoi(char *s)
{
	int k = 0;
	unsigned int l = 0;
	int m = 1;
	int i = 0;

	while (s[k])
	{
		if (s[k] == 45)
		{
			m *= -1;
		}

		while (s[k] >= 48 && s[k] <= 57)
		{
			i = 1;
			l = (l * 10) + (s[k] - '0');
			k++;
		}

		if (i == 1)
		{
			break;
		}

		k++;
	}

	l *= m;
	return (l);
}
