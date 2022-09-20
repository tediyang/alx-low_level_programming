#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string reversed
 * @s: param
 */

void print_rev(char *s)
{
	int len, i;

	len = strlen(s);
	i = (len - 1);

	while (i > 0)
	{
		putchar(s[i]);
		--i;
	}

	putchar('\n');
}
