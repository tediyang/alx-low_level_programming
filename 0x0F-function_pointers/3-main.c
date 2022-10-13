#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - runs the program and does the calculation.
 *
 * @argc: argument count
 * @argv: argument values, the values are 4 but starting fron index 0.
 *
 * Return: value evaluated.
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	/* if operator is not null and operator is not more than 1 char i.e 2d array */
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* now checking if the value of the operator is / or % and the divisor num2 is 0 */
	if ((*operator == 47 || *operator == 37) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);
}
