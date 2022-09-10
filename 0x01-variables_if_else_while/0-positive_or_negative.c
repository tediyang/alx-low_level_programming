#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* 
 * main - this prints if the result of n if it value is negative positive or neutral.
 *
 * Return: this always return 0 because the function is a int function.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
