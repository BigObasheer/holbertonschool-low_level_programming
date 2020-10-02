#include "hash_tables.h"

/**
 * hash_table_get - return value of node
 * @ht: hashtable
 * @key: key
 * Return: value of the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	if (!ht)
		return (NULL);
	node = ht->array[key_index((const unsigned char *)key, ht->size)];
	for (; node; node = node->next)
		if (strcmp(node->key, key) == 0)
			return (node->value);
	return (NULL);
}
