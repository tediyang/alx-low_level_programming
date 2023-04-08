#include "lists.h"

/**
 * list_len - print the number of list node.
 *
 * @h: param
 *
 * Return: the number of list node.
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		num++;
	}

	return (num);
}
