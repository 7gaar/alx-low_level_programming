#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - a function that returns a pointer ti a 2d array
 * @width: width of the array
 * @height: height of the array
 *
 * OCT 30TH 23
 * Ahmed Ali
 *
 * Return: apointer to 2d array (Success), 0 (Error)
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	ptr = (int **) malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			free(ptr);
			for (j = 0; j <= i; j++)
				free(ptr[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
