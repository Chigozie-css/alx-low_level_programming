#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a listint_t linked list.
 *
 * @head: pointer to node
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *b4, *mor;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		mor = (*head)->next;
		free(*head);
		*head = mor;
		return (1);
	}
	b4 = *head;
	for (a = 0; a < index - 1; a++)
	{
		if (b4->next == NULL)
			return (-1);
		b4 = b4->next;
	}
	mor = b4->next;
	b4->next = mor->next;
	free(mor);
	return (1);
}
