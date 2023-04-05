#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * pop_listint - prints the lists.
 *
 * @head: param
 *
 * Return: the number of list node.
 */

int pop_listint(listint_t **head)
{
	int p_node;
	listint_t *tmp;

	/* if no listnode was passed as a parameter*/
	if (head == NULL)
		return (0);

	tmp = *head;

	p_node = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (p_node);
}
