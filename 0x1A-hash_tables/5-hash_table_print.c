#include "hash_tables.h"

/**
 * hash_table_print - print the table.
 * @ht: hash table.
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			printf("%s'%s': '%s'", sep, ht->array[i]->key, ht->array[i]->value);
				sep = ", ";
		}
	}
	printf("}\n");
}
