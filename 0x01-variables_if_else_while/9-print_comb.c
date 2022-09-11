#include <stdio.h>

/**
 * main - combo
 *
 * Return: always 0
 */

int main(void)
{
	int a, c;

	for (a = 0; a <= 9; a++)
	{
		c = a + '0';
		putchar(c);
		putchar(',');
	}
	putchar('\n');

	return (0);
}
