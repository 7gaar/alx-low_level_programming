#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @pt: memory to be filled
 * @j: char
 * @k: num of times to copy j
 *
 * Return: pointer to the memory area pt
 */
char *_memset(char *pt, char j, unsigned int k)
{
	unsigned int i;

	for (i = 0; i < k; i++)
	{
		pt[i] = j;
	}

	return (pt);
}

/**
 * *_calloc - a function that allocates memory for an array
 * @nmemb: num of elements in the array
 * @size: size of each element
 *
 * NOV 2nd 23
 * Ahmed Ali
 *
 * Return: a pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (0);
	if (nmemb == 0 || size == 0)
		return (0);
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
