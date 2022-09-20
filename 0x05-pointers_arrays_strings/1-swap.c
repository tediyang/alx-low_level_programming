#include "main.h"

/** swap_int - swapsthe values of two integers.
 * @a: parameter
 * @b: parameter
 */

void swap_int(int *a, int *b)
{
	int c = *a, d = *b;

	*a = d;
	*b = c;
}
