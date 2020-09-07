#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of hash table
 * Return: ointer to new hash table, or NULL in the event of failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	new->size = size;
	new->array = malloc(size * sizeof(hash_node_t *));
	if (!new->array)
	{
		free(new);
		return (NULL);
	}

	for (; size; size--)
		new->array[size - 1] = NULL;

	return (new);
}

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
