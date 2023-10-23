#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: pointer to node
 * @n: item to add
 *
 * Return:  address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_node, *a;

	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
		return (NULL);
	add_node->n = n;
	add_node->next = NULL;
	a = *head;
	if (a == NULL)
		*head = add_node;
	else
	{
		while (a->next != NULL)
			a = a->next;
		a->next = add_node;
	}
	return (*head);
}
