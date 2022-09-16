#include "main.h"

/** print_line - prints line
 * @n: parameter
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		int a;

		for (a = 0; a < n; a++)
			_putchar('_');

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
