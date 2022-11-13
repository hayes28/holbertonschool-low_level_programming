#include "lists.h"

/**
 * dlistint_len - function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: pointer to the head
 *
 * Return: the number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
