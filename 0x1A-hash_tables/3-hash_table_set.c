#include "hash_tables.h"

/**
 * create_node - This creates a node with key and value.
 * @key: The key.
 * @value: The value.
 * Return: A node.
*/

hash_node_t *create_node(char *key, char *value)
{
    /* Creates a pointer to a new hash table node */
    hash_node_t *node;

    node = malloc(sizeof(hash_node_t));
    if (node == NULL)
        return (NULL);
    node->key = malloc(strlen(key) + 1);
    node->value = malloc(strlen(value) + 1);
    if (node->key == NULL || node->value == NULL)
        return (NULL);

    strcpy(node->key, key);
    strcpy(node->value, value);
    node->next = NULL;

    return node;
}

/**
 * hash_table_set - This add node to the table.
 * @ht: The hash table.
 * @key: The key.
 * @value: The value.
 * Return: returns 1 for success or 0 for fail.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *item;
    hash_node_t *new;
    unsigned long int index;

    if (ht == NULL || key[0] == '\0')
    {
        return (0);
    }

    index = key_index((const unsigned char *)key, ht->size);
    item = ht->array[index];
    new = create_node((char *)key, (char *)value);
    if (new == NULL)
        return (0);

    if (item == NULL)
    {
        ht->array[index] = new;
        return (1);
    }
    else
    {
        if (strcmp(item->key, key) == 0)
        {
            ht->array[index]->value = (char *)value;
            return (1);
        }
        else
        {
            new->next = item;
            ht->array[index] = new;
            return (1);
        }
    }
}
