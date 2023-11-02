#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * NOV 2ns 23
 * Ahmed Ali
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}
