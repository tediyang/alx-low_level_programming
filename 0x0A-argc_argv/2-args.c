#include <stdio.h>

/**
 * main - prints the arguments
 *
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; ++i)
		printf("%s\n", argv[i]);

	return (0);
}
