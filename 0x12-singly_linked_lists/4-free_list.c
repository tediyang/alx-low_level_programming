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

	while (head)
	{
		tmp = head->next;
		free(head);
		free(head->str);
		head = tmp;
	}
}
