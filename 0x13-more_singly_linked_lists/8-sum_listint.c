#include "lists.h"

/**
 * sum_listint - sums the values in the listnode.
 *
 * @head: pointer to listnode.
 *
 * Return: returns the sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
