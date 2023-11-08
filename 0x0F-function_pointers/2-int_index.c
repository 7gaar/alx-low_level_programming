#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array to be searched
 * @size: size of array
 * @cmp: a pointer to a function
 *
 * Return: return -1  if size > 0, if no elemenet matched
 * return -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
		return (-1);
}
