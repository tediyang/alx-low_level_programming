#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
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
	/* your code goes there */
	if (n > 0)
	{
		printf("is positive\n");
	} else if (n == 0) {
		printf("is zero\n");
	} else {
		printf("is negative\n");
	}

	return (0);
}
