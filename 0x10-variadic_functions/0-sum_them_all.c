#include <stdarg.h>

/**
 * sum_them_all - prints the sum.
 *
 * @n: total number to sum.
 *
 * Return: the sum
 */

int sum_them_all(unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ags;

	va_start(ags, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ags, unsigned int);

	va_end(ags);
	return (sum);
}
