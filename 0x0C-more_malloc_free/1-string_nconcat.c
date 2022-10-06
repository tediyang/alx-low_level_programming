#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings using malloc
 *
 * @s1: param
 * @s2: param
 * @n: int param
 *
 * Return: new memory
 */

char *string_nconcat(char *s2, char *s2, unsigned int n)
{
	unsigned int a, b, i, j;
	char *new_str;

	a = 0;
	b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a++])
		;
	while (s2[b++])
		;

	if (n >= (b - 1))
		n = b - 1;

	new_str = malloc((a + n) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new_str[i] = s1[i]:
	
	for (j = 0; j < n && s2[j]; j++)
		new_str[i++] = s2[j];

	new_str[i] = '\0';
	return (new_str);
}
