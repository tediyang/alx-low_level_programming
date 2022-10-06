#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - check if a memory pointer was created.
 *
 * @b: param
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
