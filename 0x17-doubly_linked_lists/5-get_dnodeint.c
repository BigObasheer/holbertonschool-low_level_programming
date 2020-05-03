#include "lists.h"

/**
 * get_dnodeint_at_index - gets a the value of a dnode_int at the index
 * @head: head of dlist
 * @index: index of node to return
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; i++, head = head->next)
		if (i == index)
			return (head);
	return (NULL);
}
