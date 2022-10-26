#include "main.h"

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

	if (*head == NULL)
		first->next = NULL;
	else
		first->next = *head;

	first->n = n;

	*head = first;

	return (*head);
}
