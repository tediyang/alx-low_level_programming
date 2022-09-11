#include <stdio.h>

/**
 * main - prints combination.
 *
 * Return: always 0
 */

int main(void)
{
	int a, c;

	a = 0;

	while (a < 10)
	{
		if (a < 10)
		{
			c = a + '0';
			putchar(c);
		}
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');

	return (0);
}
