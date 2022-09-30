#include <stdio.h>

/**
 * main - multiply two numbers.
 *
 * @argc: command line args count
 * @argv: command line args array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		printf("%d\n", (atoi(argv[argc - 1]) * atoi(argv[argc - 2])));
	}
	return (0);
}
