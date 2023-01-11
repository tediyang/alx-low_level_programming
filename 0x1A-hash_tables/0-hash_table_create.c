#include "hash_tables.h"

/*
 * hash_table_create - This function creaes an hash table and return a pointer
 * to a newly created table.
 * size: size of the table
 * Return: a pointer to new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;

	hash_table_t *table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return NULL;
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t));
	if (table->array == NULL)
		return NULL;
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return table;
}
