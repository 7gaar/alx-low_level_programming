#include "main.h"

/**
 * _strncpy - copies  string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * OCT 19th
 * Ahmad Ali
 *
 * Return: a pointer to resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;

	while (src[k] != '\0' && k < n)
	{
		dest[k] = src[k];
		k++;
	}

	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}
