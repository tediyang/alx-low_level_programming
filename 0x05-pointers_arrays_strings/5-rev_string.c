#include "main.h"
#include <string.h>

/**
 * rev_string - reversea string
 * @s: params
 */

void rev_string(char *s)
{
	int a, len, hold;

	len = strlen(s);

	for (a = 0; a < len / 2; a++)
	{
		hold = s[a];
		s[a] = s[len - a - 1];
		s[len - a - 1] = hold;
	}
}
