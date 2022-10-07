#include "main.h"
#include <stdlib.h>

/**
 * _memset - set the memory to zero just like calloc does
 *
 * @mem: memory set
 * @a: int param which is zero
 * @space: nmemb and size
 *
 * Return: char pointer
 */

char *_memset(char *mem, unsigned int a, unsigned int space)
{
	unsigned int i;

	for (i = 0; i < space; i++)
		mem[i] = a;
	return (mem);
}

/**
 * _calloc - create a mem and return a pointer
 *
 * @nmemb: param
 * @size: param
 *
 * Return: pointer void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	_memset(mem, 0, size * nmemb);

	return (mem);
}
