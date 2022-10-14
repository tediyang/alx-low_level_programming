#include <stdarg.h>

int sum_them_all(unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ags;

	va_start(args, n);	

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(args, unsigned int);

	va_end(args);
	return (sum);
}
