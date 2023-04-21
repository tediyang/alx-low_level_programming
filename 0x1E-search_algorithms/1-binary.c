#include "search_algos.h"

/**
 * print_array - prints the members of the array.
 *
 * @array: pointer to array
 * @start: beginning of the array.
 * @end: end of array.
 *
 * Return: void
 */

void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array:");
	for (; start < end; start++)
	{
		if (start == (end - 1))
			printf(" %d", array + start);
		printf(" %d,", array[start]);
	}
}

/**
 * binary_search -  searches for a value using binary search.
 *
 * @array: pointer pointing to the array of int.
 * @size: size of the array.
 * @value: value to search for.
 *
 * Return: returns 0 if found and -1 if not found.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start, mid, end;

	if (!array)
		return (-1);

	start = 0;
	mid = size / 2;
	end = size;

	print_array(array, start, end);

	if ((size_t)value == mid)
		return (mid);
	if ((size_t)value < mid)
		binary_search(array, mid, value);
	if ((size_t)value > mid)
		binary_search(array + mid, mid, value);
	return (-1);
}
