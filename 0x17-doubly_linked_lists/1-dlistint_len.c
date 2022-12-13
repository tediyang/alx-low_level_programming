#include "lists.h"

/**
 * dlistint_len - returns the number of list in a list node.
 *
 * @h: the list node
 *
 * Return: the number of lists
 */

size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);

	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (0);
}
