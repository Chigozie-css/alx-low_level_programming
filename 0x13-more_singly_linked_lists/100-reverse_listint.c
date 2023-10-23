#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 *
 * @head: pointer to node
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *b4, *mor;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	b4 = NULL;
	while (*head != NULL)
	{
		mor = (*head)->next;
		(*head)->next = b4;
		b4 = *head;
		*head = mor;
	}
	*head = mor;
	return (*head);
}
