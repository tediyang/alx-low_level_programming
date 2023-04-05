#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * get_nodeint_at_index - get the node at a specific index.
 *
 * @head: the listnode
 *
 * Return: the node at the specific index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;
	listint_t *tmp;
	listint_t *nth;

	tmp = head;

	if (head == NULL)
		return (0);

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	nth = head;
	head = tmp;

	return (nth);
}
