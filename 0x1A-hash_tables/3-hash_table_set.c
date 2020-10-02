#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
		
	if ((!ht) || (!key)  || (!value))
	{
		return(0);
	}
	index = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	ht->array[index] = new_node;
	return(1);
}
