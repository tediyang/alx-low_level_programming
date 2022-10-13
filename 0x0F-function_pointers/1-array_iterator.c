#include <stddef.h>

/**
 * array_iterator - print array in different forms specified.
 *
 * @array: array param
 * @size: size
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
