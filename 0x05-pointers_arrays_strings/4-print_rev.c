#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string reversed
 * @s: param
 */

void print_rev(char *s)
{
	int i;

	i = strlen(s);

	while (i > 0)
	{
		putchar(s[i]);
		--i;
	}

	putchar('\n');
}
