#include <stdio.h>

/**
 * main - prints 3 digits combo
 *
 * Return: always 0
 */

int main(void)
{
	int a, b, c, d, e, f;

	for (a = 0; a <= 7; a++)
	{
		for (b = 0; b <= 8; b++)
		{
			if (a != b && a <= (b - 1) && (b - 1) >= 0)
			{
				for (c = 0; c <= 9; c++)
				{
					if (b != c && b <= (c - 1) && (c - 1) >= 0)
					{
						d = a + '0';
						e = b + '0';
						f = c + '0';
						putchar(d);
						putchar(e);
						putchar(f);

						if (!(a == 7 && b == 8 && c == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
