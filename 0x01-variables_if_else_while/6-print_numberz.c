#include <stdio.h>

/**
 * main - prints numbers
 *
 * Return: always 0
 */

int main(void)
{
	int a, c;

	a = 0;

	while (a < 10)
	{
		c = a + '0';
		putchar(c);
		a++;
	}
	putchar('\n');

	return (0);
}
