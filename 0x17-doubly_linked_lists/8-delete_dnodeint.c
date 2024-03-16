#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (current == NULL)
		return -1;

	while (current->prev != NULL)
		current = current->prev;

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	if (current == NULL)
		return -1;

	if (current->prev != NULL)
	current->prev->next = current->next;
	else
		*head = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return 1;
}
