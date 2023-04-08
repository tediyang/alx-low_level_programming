#include "lists.h"

/**
 * add_node_end - add to the end of the list.
 *
 * @head: listnode.
 * @str: string.
 *
 * Return: listnode
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *c_head;
	char *dup;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	dup = strdup(str);
	if (!dup)
	{
		free(new);
		return (NULL);
	}

	new->str = dup;
	new->len = strlen(str);
	new->next = NULL;

	c_head = *head;

	if (!*head)
	{
		*head = new;
		return (*head);
	}

	while (c_head->next)
		c_head = c_head->next;
	c_head->next = new;
	return (*head);
}
