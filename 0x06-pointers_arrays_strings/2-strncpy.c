#include "main.h"

/**
 * _strncpy - copy an array
 * @dest: param
 * @src: param
 * @n: int param
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b, c;

	b = 0;

	while (src[b])
		b++;

	if ((b - 1) > n)
		for (c = 0; c < n; c++)
			dest[c] = src[c];
	else
	{
		for (c = 0; c < b; c++)
			dest[c] = src[c];
		for (; c < n; c++)
			dest[c] = '\0';
	}

	return (dest);
}
