#include "main.h"

/** 
 * print_line - prints line
 * @n: parameter
 * Return: void
 */

void print_line(int n)
{
	int a = 1;

	while (a <= n)
	{
		_putchar(95);
		a++;
	}
	_putchar('\n');
}
