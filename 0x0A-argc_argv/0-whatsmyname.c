#include <stdio.h>

/**
 * main - prints the program name
 *
 * @argc: command line args count
 * @argv[]: command line args array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
