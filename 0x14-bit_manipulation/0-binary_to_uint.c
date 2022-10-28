#include "main.h"

/**
 * binary_to_uint - convert binary to decimal
 *
 * @b: string to be converted
 *
 * Return: value in decimal (base 10)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		result <<= 1;
		if (b[i] == '1')
			result += 1;
	}

	return (result);
}
