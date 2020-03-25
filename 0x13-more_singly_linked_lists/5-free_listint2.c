#include "lists.h"

/**
 * free_listint2 - frees memory allocated for a listint_t structure
 * @head: head for listint_t struct
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
	free(*head);
	*head = NULL;
}
