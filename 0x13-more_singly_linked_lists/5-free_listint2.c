#include "lists.h"

/**
 * free_listint2 - free the listnode
 *
 * @head: listnode
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *list;

	if (head != NULL)
	{
		list = *head;

		while ((temp = list) != NULL)
		{
			list = list->next;

			free(temp);
		}
		*head = NULL;
	}
}
