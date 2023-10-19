#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * OCT 19th 23
 * Ahmad Al
 *
 * Return: address of s
 */
char *leet(char *s)
{
	int k, l;
	char n[] = "aAeEoOtTlL";
	char m[] = "4433007711";

	for (k = 0; *(s + k); k++)
	{
		for (l = 0; l <= 9; l++)
		{
			if (n[l] == s[k])
				s[k] = m[l];
		}
	}
	return (s);
}
