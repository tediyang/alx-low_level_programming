#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to two dimensional array
 *
 * @width: width param
 * @height: height param
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid, a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			while (a >= 0)
			{
				free(grid[a]);
				a--;
			}
			free(grid);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}
	return (grid);
}
