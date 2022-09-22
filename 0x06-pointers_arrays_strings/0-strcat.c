#include "main.h"

/**
 * _strcat - concat string
 * @dest: param
 * @src: param
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	/*find the length of the dest file*/
	while (dest[a])
		a++;

	for (b = 0; src[b]; b++)
	{
		dest[a++] = src[b];
	}
	return (dest);
}
