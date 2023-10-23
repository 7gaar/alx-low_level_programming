#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * OCT 23th 23
 * Ahmed Ali
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (dest == src)
	{
		return (dest);
	}
	for (unsigned int i = 0; i < n; i++)
	{
		dest[i] = src[i];
		return (dest);
	}
}
