#include "lists.h"

/**
 * free_listint - free the space in the memory.
 *
 * @head: the listnode.
 */

void free_listint(listint_t *head)
{
	listint_t *list;

	while ((list = head) != NULL)
	{
		head = head->next;

		free(list);
	}
}
