#include <stdio.h>
#include "lists.h"

/**
 * struct listint_s -singly linked list
 *
 * @n: integer
 * @next: points to the next node.
 *
 * Description: singly linked listnode
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

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

	while (h != NULL)
	{
		printf("%d\n", h->n);

		if (h != NULL)
			h = (h->next == NULL) ? NULL: h->next;

		count++;
	}
	return (count);
}
