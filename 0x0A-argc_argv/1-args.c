#include <stdio.h>

/**
 * main - prints the number of args
 *
 * @argc: command line args count
 * @argv: command line args array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) *argv[];
	printf("%d\n", argc);
	return (0);
}
