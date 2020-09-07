#include "lists.h"

/**
 * sum_dlistint - returns the sum of all dlistint nodes
 * @head: head of dlist
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head; head = head->next)
		sum += head->n;
	return (sum);
}
