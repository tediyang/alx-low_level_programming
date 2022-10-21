#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints the number
 *
 * @separator: param
 * @n: total number of variable
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator && i != (n - 1))
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}