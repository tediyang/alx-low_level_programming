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

	/* Check if h doesn't contain any node */
	if (h == NULL)
		return (num);

	while (h != NULL)
	{
		/* check if str is present */
		if (!h->str)
			printf("[0] (nil)\n");
		/* print the str value of node */
		else
			printf("[%d] %s\n", h->len, h->str);

		/* Then increment the num */
		num++;

		/* Move to the next node */
		h = h->next;
	}

	return (num);
}
