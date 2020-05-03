#include "lists.h"

/**
 * free_dlistint - frees a dlist
 * @head: head of dlist
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *end;

	while (head != NULL)
	{
		end = head;
		head = head->next;
		free(end);
	}
}
