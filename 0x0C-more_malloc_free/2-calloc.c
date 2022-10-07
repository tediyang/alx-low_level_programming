#include "main.h"
#include <stdlib.h>

/**
 * _calloc - create a mem and return a pointer
 *
 * @nmemb: param
 * @size: param
 *
 * Return
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	return (mem);
}
