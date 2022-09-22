#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - prints half of string
 * @str: param
 */

void puts_half(char *str)
{
	int a, len;

	len = strlen(str);

	for (a =(len - 1) / 2; a <= len; a++)
	{
		putchar(str[a]);
	}
	putchar('\n');
}
