#include <stdio.h>

/**
 * main - prints divisors
 *
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 1; c < 100; c++)
	{
		if (c % 3 == 0 && c % 5 == 0)
			printf("FizzBuzz ");
		else if (c % 3)
			printf("Fizz ");
		else if (c % 5)
			printf("Buzz ");
		else
			printf("%d ", c);
	}
	printf("Buzz\n");
	return (0);
}
