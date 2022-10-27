#include "lists.h"

/**
 * _atoi - convert to int
 *
 * @c: char
 *
 * Return: integer
 */

unsigned int _atoi(char c)
{
	return ((unsigned int) c - '0');

/**
 * binary_to_uint = convert binary to decimal
 *
 * @b: string
 *
 * Return: value in decimal (base 10)
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j, k, len, result, base;
	unsigned int num;

	if (b == NULL)
		return (0);

	result = 0;
	i = 0;
	while (b[i])
		++i;

	len = i - 1;

	for (j = 0; j <= len; j++)
	{
		base = 1;

		for (k = j; k < len; k++)
			base *= 2;

		num = _atoi(b[j]);

		if (num != 0 && num != 1)
			return (0);

		result += (num * base);
	}
	return (result);
}
