#include "lists.h"

/**
 * print_dlistint - prints a doubly linked lists
 * @h: dlistint_t head
 * Return: number of elements in dlistin_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	for (; h != NULL; h = h->next, i++)
	{
		printf("%d\n", h->n);
	}
	return (i);
}
