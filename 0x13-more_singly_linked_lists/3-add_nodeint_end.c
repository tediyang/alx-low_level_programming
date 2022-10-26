#include "lists.h"

/**
 * add_nodeint_end - add to the end of the list.
 *
 * @head: listnode
 * @n: integer.
 *
 * Return: listnode
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first, *temp;

	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);

	first->n = n;
	first->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = first;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = first;
	}
	return (*head);
}
