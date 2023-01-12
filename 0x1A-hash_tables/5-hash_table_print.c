#include "hash_tables.h"

/**
 * hash_table_print - print the table.
 * @ht: hash table.
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char *sep;
	hash_node_t *item;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item)
		{
			printf("%s'%s': '%s'", sep, ht->array[i]->key, ht->array[i]->value);
				sep = ", ";
				item = item->next;
		}
	}
	printf("}\n");
}
