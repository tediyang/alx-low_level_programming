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
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", (atoi(agrv[agrc - 1]) * atoi(argv[argc - 2]));
	}
	return (0);
}
