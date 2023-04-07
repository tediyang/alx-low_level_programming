#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the lists.
 *
 * @h: param
 *
 * Return: the number of list node.
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (NULL);

	while (h)
	{
		if (h->str)
			printf("[%d] %s/n", strlen(h->str), h->str);
		else
			printf("[0] (nil)");
		h = h->next;
	}
	return (num);
}
