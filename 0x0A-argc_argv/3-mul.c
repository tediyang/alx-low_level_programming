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
	if (argv[argc - 2] && argv[argc -1])
		printf("%d\n", (atoi(argv[argc - 2]) * atoi(argv[argc -1])));
	else
		printf("Error");
	return (0);
}
