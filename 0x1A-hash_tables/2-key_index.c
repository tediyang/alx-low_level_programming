#include "hash_tables.h"

/**
 * key_index - get the index that the key should be added to.
 * @key: the string.
 * @size: table size
 * Return: The index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	hash = hash_djb2(key);

	return (hash % size);
}
