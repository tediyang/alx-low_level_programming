#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is an int function
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	long l = n % 10

	if (l > 5)
		printf("Last digit of n is %ld and is greater than 5\n", l);
	else if (n == 0)
		printf("Last digit of n is %ld and is 0\n", l);
	else
		printf("Last digit of n is %ld and is less than 6 and not 0\n", l);

	return (0);
}
