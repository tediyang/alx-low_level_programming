#include "main.h"
#include <stdlib.h>

/**
 * array_range - mem with range of array
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return:int pointer
 */

int *array_range(int min, int max)
{
	int i;
	int *array_mem;

	if (min > max)
		return (NULL);

	array_mem = malloc((max - min + 1) * sizeof(int));

	if (array_mem == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array_mem[i] = min;
		min++;
	}
	return (array_mem);
}
