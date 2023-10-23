#include "main.h"
/**
 * Discription - a function that fills memory with constant byte.
 *
 * *_memset - fills memory with a constant byte
 * @s: string with constant byte
 * @n: bytes of memory
 * @b: memory area pointer
 *
 * OCT 23th 23
 * Ahmad Ali
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}
		return (s);
}
