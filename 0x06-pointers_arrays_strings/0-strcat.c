#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append
 * @src: string to add
 *
 * OCT 19th
 * ahmad ali
 *
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	int k, l;

	k = 0;
	l = 0;

	while (dest[k] != '\0')
		k++;

	while (src[l] != '\0')
	{
		dest[i] = src[l];
		l++;
		k++;
	}

	dest[k] = '\0';

	return (dest);
}
