#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a specific index
 * @idx: index to insert at
 * @h: head of dlistint_t
 * @n: data for new node
 * Return: address to the new dnodeint or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *hold = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;

		if (*h)
			(*h)->prev = new;

		*h = new;
		return (new);
	}

	for (i = 0; hold; i++, hold = hold->next)
		if (i == idx - 1)
		{
			new->next = hold->next;
			if (new->next)
				new->next->prev = new;
			new->prev = hold;
			hold->next = new;
			return (new);
		}
	free(new);
	return (NULL);
}
