#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print the items in the list.
 *
 * @h: listnode
 *
 * Return: the number of list.
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);

		if (h != NULL)
			h = (h->next == NULL) ? NULL: h->next;

		count++;
	}
	return (count);
}
