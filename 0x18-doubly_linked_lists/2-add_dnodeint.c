#include "lists.h"

/**
 * add_dnodeint - function that adds a new
 * node at the beginning of a dlistint_t list.
 *
 * @head: double pointer to the head
 * @n: integer variable from provided struct
 *
 * Return: address of the new element, NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!(newNode))
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head)
	{
		(*head)->prev = newNode;
	}
	*head = newNode;

	return (newNode);
}
