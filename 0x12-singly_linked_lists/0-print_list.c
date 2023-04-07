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

	if (!h)
		return (0);

	while (h)
	{
		if (h->str)
			printf("[%li] %s/n", strlen(h->str), h->str);
		else
			printf("[0] (nil)");
		num++;
		h = h->next;
	}
	return (num);
}
