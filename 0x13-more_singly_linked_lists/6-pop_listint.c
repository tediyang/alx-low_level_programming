#include "lists.h"

/**
 * pop_listint - remove the parent list.
 *
 * @head: the list nodes
 *
 * Return: the n value of the first node.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp, *list;
	int n;

	if (head !== NULL)
	{
		list = *head;

		if ((temp = list) != NULL)
		{
			list = list->next;
			n = temp->n;
			free(temp);
		}
		*head = list;
	}
	else
		return (0);
	return (n);
}
