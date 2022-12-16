#include "lists.h"

/**
 * sum_dlistint - sum all the values in the listnode
 *
 * @head: the listnode
 *
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	if (!head)
		return (0);

	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
