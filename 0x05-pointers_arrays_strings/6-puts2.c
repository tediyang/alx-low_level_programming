#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints a string
 * @str: param
 */

void puts2(char *str)
{
	int a, len;

	len = strlen(str);

	for (a = 0; a < len; a = a + 2)
	{
		putchar(str[a]);
	}
	putchar('\n');
}
