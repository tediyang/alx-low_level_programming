#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the space previously created.
 *
 * @grid: grid created to be cleared
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
