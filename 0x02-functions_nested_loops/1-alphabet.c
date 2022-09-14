#include "main.h"

/**
 * print_alphabet - prints the alphabet.
 *
 * Return: returns void
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);

	_putchar('\n');

	return;
}
