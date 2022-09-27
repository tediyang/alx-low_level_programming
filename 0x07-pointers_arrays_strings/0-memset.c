#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: point param
 * @b: char param
 * @n: int param
 *
 * Return: returns pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;

	return (s);
}
