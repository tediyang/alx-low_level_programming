#include "main.h"

/**
 * _isupper - check if the character is upper.
 * @c: parameter
 * Return: always 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
