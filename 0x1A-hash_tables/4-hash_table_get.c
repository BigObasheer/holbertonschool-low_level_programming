#include "hash_tables.h"

/**
 * hash_table_get - return vale of node
 * @ht: hashtable
 * @key: key
 * Return: value of the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	char *value = NULL;

	if ((!ht) || (!key))
		return(NULL);
	if (strcmp(ht->array[index]->key, (char *)key) == 0)
	{
		value = ht->array[index]->value;
	}
	return(value);
}
