#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * OCT 19th 23
 * Ahmad Ali
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int k, l;

	char *n = "aAeEoOtTlL";
	char *m = "4433007711";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (l = 0; l < 10; l++)
		{
			if (s[k] == a[l])
			{
				s[k] = b[l];
			}
		}
	}

	return (s);
}
