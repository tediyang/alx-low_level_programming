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
	listint_t *p_node;

	/* if no listnode was passed as a parameter */
	if (*head == NULL)
		return (-1);

	p_node = *head;
	*head = (*head)->next;
	p_node->next = NULL;
	return (p_node->n);
}
