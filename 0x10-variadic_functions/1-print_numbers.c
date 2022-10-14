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
	if (!separator)
		printf("\n");

	else
	{
		unsigned int i;
		va_list args;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			if (i == 0)
				printf("%d", va_arg(args, int));
			else
				printf("%c %d", *separator, va_arg(args, int));
		}
		printf("\n");
		va_end(args);
	}
}
