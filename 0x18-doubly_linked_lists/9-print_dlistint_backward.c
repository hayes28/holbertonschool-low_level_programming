#include "lists.h"

/**
 * print_dlistint_backward - function that prints all the
 * elements of a dlistint_t list backward.
 *
 * @h: pointer to the head of list
 *
 * Return: the number of nodes
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t node = 0, total;

	if (!(h))
		return (node);

	while (h->next)
	{
		h = h->next;
		node++;
	}
	total = node;
	for (; node > 0; node--)
	{
		printf("%d\n", h->n);
		h = h->prev;
	}
	printf("%d\n", h->n);
	total++;
	return (total);
}
