#include "main.h"
/**
 * _strcpy - copy the string pointed to by src to dest
 *
 * OCT 16th 23
 * Ahmad Ali
 *
 * @dest: char to check
 * @src: char to check
 * Return: 0 is success
 */
char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
		dest[k] = src[k];
	dest[k] = '\0';
	return (dest);
}
