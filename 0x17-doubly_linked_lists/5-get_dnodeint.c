#include "lists.h"

/**
 * get_dnodeint_at_index - This gets the value of node a index.
 *
 * @head: the listnode
 * @index: the index
 *
 * Return: the value of the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (count++ < index && head)
		head = head->next;
	if (!head)
		return (NULL);

	return (head);
}
