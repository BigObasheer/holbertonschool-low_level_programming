#include "lists.h"

/**
 * list_list - returns the number of elements in a linked list_t list
 * @h: struct list_t, first node
 * Return: number of nodes
 */

size_t list_list(const list_t *h)
{
	int i;

	for (i = 0; h; i++, h = h->next)
	{
		;
	}
	return (i);
}
