#ifndef LISTS_H
#define LISTS_H

/**
 * print_listint - print list
 *
 * @h: listnode
 *
 * Return: returns the number of count.
 */

size_t print_listint(const listint_t *h)
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
