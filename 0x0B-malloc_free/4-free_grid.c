#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees the memory of aa grid
 * @grid: grid to free
 * @height: height of the grid
 *
 * OCT 30th 23
 * Ahmed Ali
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
