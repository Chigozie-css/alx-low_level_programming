#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 *
 * @head: pointer to node
 *
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int node1;
	listint_t *a, *b;

	if (*head == NULL)
		return (0);
	a = *head;
	b = a->next;
	node1 = a->n;
	free(a);
	*head = b;
	return (node1);
}
