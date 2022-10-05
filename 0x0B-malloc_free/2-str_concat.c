#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concaternate two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: return new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, a;
	char *new;

	i = 0;
	j = 0;

	if (s2 == NULL)
		s2 = "";
	else if (s1 == NULL)
		s1 = "";

	while (s1[i++])
		;
	while (s2[j++])
		;

	new = (char *)malloc(sizeof(char) * (i + j));

	if (new == NULL)
		return (NULL);

	for (k = 0; s1[k]; k++)
		new[k] = s1[k];
	for (a = 0; s2[a]; a++)
		new[k++] = s2[a];

	new[k] = '\0';

	return (new);
}
