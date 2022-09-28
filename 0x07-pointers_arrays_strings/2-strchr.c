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
	int a, b;

	a = 0;

	while (s[a])
		a++;

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
