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
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
