#include "main.h"

/**
 * print_diagonal - prints value
 * @n: parameter
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		a = 1;

		while (a <= n)
		{
			b = 1;

			while (b <= a)
			{
				if (b != 1)
					_putchar(' ');
				b++;
			}
			_putchar(92);
			_putchar('\n');
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
