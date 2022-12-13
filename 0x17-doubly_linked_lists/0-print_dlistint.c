#include "lists.h"
#include <stdio.h>

size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	
	size_t count = 0;z

	while (h)
	{
		printf("%d\n", h->n);
		count++;
	
		h = h->next;
	}
	
	return count;
}
