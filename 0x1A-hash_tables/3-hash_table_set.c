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
	hash_node_t *new_node, *temp, *old;

	if ((!ht) || (!key) ||  strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (temp = ht->array[index]; temp; temp = temp->next)
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	new_node->key = strdup(key);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		new_node->next = NULL;
	}
	else
	{
		old = ht->array[index];
		new_node->next = old;
		ht->array[index] = new_node;
	}
	return (1);
}
