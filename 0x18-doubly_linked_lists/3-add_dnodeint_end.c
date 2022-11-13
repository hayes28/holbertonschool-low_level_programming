#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new
 * node at the end of a dlistint_t list.
 *
 * @head: double pointer to the head
 * @n: integer variable from provided struct
 *
 * Return: address of the new element, otherwise NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	new = *head;
	while (new->next)
		new = new->next;
	new->next = tmp;

	return (new);
}
