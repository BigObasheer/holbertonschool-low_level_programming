#include "hash_tables.h"

/**
 * hash_table_print - print all elements in a hashtable
 * @ht: hashtable
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count = 0;
	hash_node_t *dup;

	if (ht)
	{
		putchar('{');
		for (i = 0; i < ht->size; i++)
		{
			dup = ht->array[i];
			for (; dup; dup = dup->next)
			{
				if (count)
					printf(", ");
				printf("\'%s\': \'%s\'", dup->key, dup->value);
				count++;
			}
		}
		printf("}\n");
	}
}
