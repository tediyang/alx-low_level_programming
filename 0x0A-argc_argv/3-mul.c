#include <stdio.h>

/**
 * main - multiply two numbers.
 *
 * @argc: command line args count
 * @argv: command line args array
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	(void) argc;
	if (argv[1] && argv[2])
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
