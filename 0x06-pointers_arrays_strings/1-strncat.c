#include "main.h"

/**
 * _strncat - concat n strings
 * @dest: point param
 * @src: point param
 * @n: int param
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b, c;

	a = 0;
	b = 0;
	/*get the lengths of dest and src*/
	while (dest[a])
		a++;
	while (dest[b])
		b++;

	if ((b - 1) < n)
	{
		for (c = 0; c < b; c++)
		{
			dest[a] = src[c];
			a++;
		}
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			dest[a] = src[c];
			a++;
		}
	}
	return (dest);
}
