#include "lists.h"

/**
 * list_listint - returns the number of  elements of a listint_t
 * @h: first node
 * Return: number of nodes
 */

listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h; i++, h = h->next)
	{
		;
	}
	return (i);
}
