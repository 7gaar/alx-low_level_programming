#include "main.h"
/**
 * Discription - a function that fills memory with constant byte.
 *
 * @s: string with constant byte
 * @n: bytes of memory 
 * @b: memory area pointer
 *
 * OCT 23th 23
 * Ahmad Ali
 *
 * Return: a pointer to the memory area 
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0
	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}
		return (s);
}
