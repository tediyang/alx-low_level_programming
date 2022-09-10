#include <stdio.h>

/**
 * main - prints alphabet
 *
 * Return: always 0
 */

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		putchar('\n');
		c++;
	}

	return (0);
}
