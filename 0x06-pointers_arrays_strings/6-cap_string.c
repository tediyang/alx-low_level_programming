#include "main.h"

/**
 * cap_string -  prints strings in cap.
 * @s: param
 * Return: returns a pointer string
 */

char *cap_string(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (a == 0 && s[a] >= 97 && s[a] <= 122)
			s[a] = s[a] - 32;
		if (s[a] == ' ')
			if (s[a + 1] != '\0' && s[a + 1] >= 97 && s[a + 1] <= 122)
				s[a + 1] = s[a + 1] - 32;
	}

	return (s);
}
