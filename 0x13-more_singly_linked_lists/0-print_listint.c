#include <stdio.h>

/**
 * print_listint - print the items in the list.
 *
 * @h: listnode
 *
 * Return: the number of list.
 */

size_t print_listint(const listint *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		if (h != NULL)
			h = (h->next == NULL) ? NULL: h->next;

		count++;
	}
	return (count);
}
