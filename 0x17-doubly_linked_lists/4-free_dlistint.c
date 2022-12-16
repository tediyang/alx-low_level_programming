#include "lists.h"

/**
 * free_dlistint - free dlistint.
 *
 * @head: the listnode
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;

	if (head)
	{
		current = head;
		while (current->next != NULL)
			current = current->next;
        	while (current->prev != NULL)
       		{
           		current = current->prev;
            		free(current->next);
		}
        }

	free(head);
}
