#include "lists.h"
#include <stdio.h>

/**
 * listint_len - return the number of list
 *
 * @h: listnode
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->n != '\0')
			count++;

		if (h->next == NULL)
			h = NULL;
		else
			h = h->next;
	}

	return (count);
}
