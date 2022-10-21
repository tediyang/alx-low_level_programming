#include "lists.h"

/**
 * print_list - prints the lists.
 *
 * @h: param
 *
 * Return: the number of list node.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);
}
