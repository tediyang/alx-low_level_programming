#include "function_pointers.h"

/**
 * array_iterator - print array
 *
 * @array: array param
 * @size: size
 * @action: function pointer.
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
