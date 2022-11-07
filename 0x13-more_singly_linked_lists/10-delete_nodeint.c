#include "lists.h"
#include "6-pop_listint.c"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index 'index' of a listint_t linked list.
 * @head: double pointer to the head
 * @index: position of node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp1, *tmp2;
	unsigned int count = 0;

	if (!(*head))
		return (-1);

	tmp1 = *head;
	if (index == 0)
	{
		pop_listint(head);
		return (1);
	}

	while (count < index - 1)
	{
		if (!(tmp1->next))
			return (-1);

		tmp1 = tmp1->next;
		count++;
	}

	tmp2 = tmp1->next;
	if (!(tmp2->next))
	{
		tmp1->next = tmp2->next;
		free(tmp2);
		return (1);
	}

	tmp1->next = tmp2->next;
	free(tmp2);

	return (1);
}
