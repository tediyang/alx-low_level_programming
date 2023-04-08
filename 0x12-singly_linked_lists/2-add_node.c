#include "lists.h"

/**
 * add_node - add node.
 *
 * @head: the listnode.
 * @str: the string literal.
 *
 * Return: the number of list node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *str_c;

	for (int i = 0; str[i]; i++)
		str_c[i] = str[i];

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = str_c;
	new->len = strlen(str);
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (*head);
	}

	while (*head)
	{
		new->next = *head;
		*head = new;
	}
	return (*head);
}
