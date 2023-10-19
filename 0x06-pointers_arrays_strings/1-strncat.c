#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source
 * @n: number of bytes of str to concatenate
 *
 * OCT 19th
 * Ahmad Ali
 *
 * Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int k, l;

	k = 0;
	l = 0;

	while (dest[k] != '\0')
		k++;

	while (src[l] != '\0' && l < n)
	{
		dest[k] = src[l];
		k++;
		l++;
	}

	dest[k] = '\0';

	return (dest);
}
