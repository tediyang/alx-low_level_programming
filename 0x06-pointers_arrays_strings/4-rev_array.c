#include "main.h"

/**
 * reverse_array - prints reverse string
 * @a: param
 * @n: param
 */

void reverse_array(int *a, int n)
{
	int i, stor;

	for (i = 0; i < n / 2; i++)
	{
		a[i] = stor;
		a[i] = a[n - i];
		a[n - 1] = stor;
	}
}
