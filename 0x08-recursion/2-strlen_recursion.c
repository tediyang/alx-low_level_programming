#include "main.h"

/**
 * _strlen_recursion - print the length of a string.
 *
 * @s: param
 *
 * Return: the number opf string.
 */

int _strlen_recursion(char *s)
{
	if (s[0])
		return (1 + _strlen_recursion(s + 1));
}
