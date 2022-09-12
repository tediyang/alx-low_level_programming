#include <stdio.h>

/**
 * main - prints 3 digits combo
 *
 * Return: always 0
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a <= 7; a++)
	{
		for (b = 1; b <= 8; b++)
		{
			for (c = 2; c <= 9; c++)
			{
				if (b > a && c > b && b >= 1)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');

					if (!(a == 7 && b == 8 && c == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
