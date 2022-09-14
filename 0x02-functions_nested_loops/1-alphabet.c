#include <stdio.h>

/**
 * main - check the code
 *
 * print_alphabet - prints the alphabet.
 *
 * Return: returns 0
 */

void print_alphabet(void)
{
	char a;
	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
