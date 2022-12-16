#include "lists.h"

/**
 * free_dlistint - free dlistint.
 *
 * @head: the listnode
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = current->next;
		free(current);
	}
}
