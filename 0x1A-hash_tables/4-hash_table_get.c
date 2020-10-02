#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	char *value  = NULL;

	if ((!ht) || (!key))
		return(NULL);
	if (strcmp(ht->array[index]->key, (char *)key) == 0)
	{
		value = ht->array[index]->value;
	}
	return(value);
}
