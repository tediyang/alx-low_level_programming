#include "main.h"

/**
 * main - prints the current file
 */

void main(void)
{
	int i;
	char s;

	s = __FILE__;

	for (i = 0; s[i] !== '\0'; i++)
		_putchar(s[i]);

	_putchar('\n');
}
