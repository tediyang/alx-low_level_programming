#include "main.h"
#include <stdlib.h>

/**
 * create_array - this creates an array of chars
 *
 * @size: size of the array
 * @c: char
 *
 * Return: a pointer of the created array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size <= 0)
		return ('\0');

	array = (char *) malloc(sizeof(char) * size);


	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
