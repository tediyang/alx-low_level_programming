#include "main.h"

/**
 * _memcpy - copy the memory
 *
 * @dest: destination to be copied to
 * @src: file to be copied from
 * @n: number of characters to be copied.
 *
 * Return: return the dest param
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a, b;

	a = 0;

	while (src[a])
		a++;

	if (a > n)
		for (b = 0; b < n; b++)
			dest[b] = src[b];

	else
		for (b = 0; b < a; b++)
			dest[b] = src[b];

	return (dest);
}
