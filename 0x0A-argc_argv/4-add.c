#include <stdio.h>
#include <stdlib.h>

/**
 * is_int - checks for integers
 *
 * @s: param
 *
 * Return: 1 or 0
 */

int is_int(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		++i;
	}
	return (0);
}

/**
 * main - adds
 *
 * @argc: command line args count
 * @argv: command line args array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (is_int(argv[argc]))
		{
			print("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
