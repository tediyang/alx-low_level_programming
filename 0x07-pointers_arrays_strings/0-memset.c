#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: param
 * @b: param
 * @n: param
 */

char *memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (;  i < n; i++)
		s[i] = b;

	return (s);
}	
