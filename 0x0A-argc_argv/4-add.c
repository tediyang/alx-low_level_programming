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

	if (s[i] < '0' || s[i] > '9')
		return (1);
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
	int i;
	int sum = 0;
	
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_int(argv[i]))
		{
			print("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%i\n", sum);
	return (0);
}
