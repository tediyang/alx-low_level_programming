#include "lists.h"

/**
 * add_nodeint - add nodes to a list
 *
 * @head: node
 * @n: int
 *
 * Return: node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;

	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);

	first->n = n;

	if (*head == NULL)
		first->next = NULL;
	else
		first->next = *head;

	*head = first;

	return (*head);
}
