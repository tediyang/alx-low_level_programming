#include "lists.h"

/**
 * free_list - free a listnode.
 *
 * @head: listnode
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (!head)
	{
		free(head);
		return;
	}

	tmp = head;

	while (head)
	{
		if (tmp->next)
			tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
