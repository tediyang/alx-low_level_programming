#include <stdio.h>

/**
 * main - check the code
 *
 * print_alphabet - prints the alphabet.
 *
 * Return: returns 0
 */

int main(void)
{
	void print_alphabet(void);
	return (0);
}

void print_alphabet(void)
{
	char a;
	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

	putchar('\n');
}
