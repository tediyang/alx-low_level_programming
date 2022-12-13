#include "list.h"
#include <stdio.h>

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	printf("%d", h->n);
	count++;

	size_t prev = print_dlistint(h->prev);
	size_t next = print_dlistint(h->next);

	if (next != 0)
		count++;
	if (prev != 0)
		count++;

	return count;
}
