#include "main.h"

/**
 * print_line - prints line
 * @n: parameter
 */

void print_line(int n)
{
	int a = 1;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar(95);
			a++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
