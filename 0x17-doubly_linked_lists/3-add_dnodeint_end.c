#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of a list.
 *
 * @head: the node
 * @n: the value in int
 *
 * Return: the listnode
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = *head;

	if (*head)
		(*head)->next = new;

	*head = new;
	return (*head);
}
