#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key and can not be an empty string
 * @value: is the value associated with the key (must be duplicated)
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if ((!ht) || (!key) || (!value))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	ht->array[index] = new_node;
	return (1);
}
