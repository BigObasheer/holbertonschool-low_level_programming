#include "hash_tables.h"

/**
 * hash_table_create - Create hash table 
 * @size: size of array
 * Return: memory address to hashtable
 */

 hash_table_t *hash_table_create(unsigned long int size)
 {
 	hash_table_t *table = malloc(sizeof(hash_table_t));
	hash_node_t **array = malloc(sizeof(hash_node_t *) * size);
	unsigned long int i;
	
 	if (!(table) || !(array))
 	{
 		free(array);
 		free(table);
 		return (NULL);
 	}

	table->size = size;
	table->array = array;

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
 }
