#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of a dlistint_t list
 * @head: beginning of dlistint_t
 * @n: data to insert into node
 * Return: address of the new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head != NULL)
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = new;
		new->prev = end;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
