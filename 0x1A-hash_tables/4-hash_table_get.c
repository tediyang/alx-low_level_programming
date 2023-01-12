#include "hash_tables.h"

/**
 * hash_table_get - get the value of a key in the hash table.
 * @ht: hash table.
 * @key: The key.
 * Return: The value.
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *item;
	unsigned long int index;

	if (ht == NULL || key[0] == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];
	if (item == NULL)
		return (NULL);

	return (item->value);
}
