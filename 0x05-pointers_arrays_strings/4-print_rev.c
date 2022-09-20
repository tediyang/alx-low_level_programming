#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string reversed
 * @s: param
 */

void print_rev(char *s)
{
	int len, i, hold;

	len = strlen(s);

	for (i = 0; i < len/2; i++)
	{
		hold =s[i];
		s[i] = s[len - i - 1];
		s[len -i - 1] = hold;
	}

	printf("%s\n", s);
}

