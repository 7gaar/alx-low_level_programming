#include "function_pointers.h"

/**
 * array_iterator - a function that executes a funtcion given
 * as a parameter on each element.
 * @array: array of elements
 * @size: size of array
 * @action: pointer to function
 *
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
