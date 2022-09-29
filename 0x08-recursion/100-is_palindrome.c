#include "main.h"
#include <string.h>

/**
 * is_palindrome - returns what the function palindrome return.
 *
 * @s: string
 * @i: int param
 *
 * Return: integer
 */

int palindrome(char *s, unsigned int i);

int is_palindrome(char *s)
{
	return (palindrome(s, 0));
}

/**
 * palindrome - returns 1 or 0 for true or false
 *
 * @s: string
 * @i: int param
 *
 * Return: integer
 */

int palindrome(char *s, unsigned int i)
{
	unsigned int j;

	j = strlen(s);

	if ((j - 1) <= i)
		return (1);
	else if (s[0] != s[j - i -1])
		return (0);
	else
		return (palindrome(s + 1, i + 1));
}
