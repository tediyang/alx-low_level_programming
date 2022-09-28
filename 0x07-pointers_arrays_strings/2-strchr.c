#include "main.h"

/**
 * _strchr - print the character specified.
 *
 * @s: string
 * @c: character to search for.
 *
 * Return: return a pointer
 */

char *_strchr(char *s, char c)
{
	int i, j, k;
	char *p;

	i = k = 0;

	while (s[i])
		i++;

	for (j = 0; j <=i; j++)
		if (s[j] == c)
		{
			for (; j <= i; j++)
			{
				p[k] = s[k];
				k++;
			}
			return (p);
		}

	return (NULL);
}
