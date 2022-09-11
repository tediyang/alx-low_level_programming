#include <stdio.h>

/**
 * main - possible two digits
 *
 * Return: always 0
 */

int main(void)
{
	int a, b, c, d;

	for (a = 0; a <= 8; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a != b && a <= (b - 1) && (b - 1) >= 0)
			{
				c = a + '0';
				d = b + '0';
				putchar(c);
				putchar(d);

				if ((a != 8 || a == 8) && b != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

