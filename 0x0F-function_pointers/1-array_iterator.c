#include "function_pointers.h"

/**
 * array_iterator - print array
 *
 * @array: array param
 * @size: size
 * @action: function pointer.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		int i;

		for (i = 0; i < size; i++;)
			action(array[i]);
	}
}
