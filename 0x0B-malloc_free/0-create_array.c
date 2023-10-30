#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of c
 * @size: size of the array
 * @c: characters of the array
 *
 * OCT 30th 23
 * Ahmad Ali
 *
 * Return: a pointer to the array (success), NULL (errir)
 */
char *create_array(unsigned int size, char c)
{
	char *ptrArray;
	unsigned int i;

	if (size == 0)
		return (0);
	ptrArray = (char *) malloc(size * sizeof(char));
	if (ptrArray == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		ptrArray[i] = c;
	}
	return (ptrArray);
}
