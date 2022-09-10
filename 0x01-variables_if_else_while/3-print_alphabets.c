#include <stdio.h>

/**
 * main - prints alphabets upper and lower
 *
 * Return: always 0
 */

int main(void)
{
	char a, c;

	a = 'a';
	c = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	return (0);
}
