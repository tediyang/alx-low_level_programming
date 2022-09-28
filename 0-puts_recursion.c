#include "main.h"

/**
 * _puts_recursion - print the sentence.
 *
 * @s: param
 */

void _puts_recursion(char *s)
{
	unsigned int i = 0;

	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(s[0]);
	_puts_recursion(s + 1);
}
