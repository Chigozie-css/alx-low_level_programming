#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 *
 * @head: pointer to node
 * @idx: index of the list where the new node is added
 * @n: item to be added to the new node
 *
 * Return:  address of the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *add_node, *b4;
	unsigned int a;

	b4 = *head;
	add_node = malloc(sizeof(listint_t));
	if ((*head == NULL && idx != 0) || add_node == NULL)
		return (NULL);
	add_node->n = n;
	for (a = 0; head != NULL && a < idx - 1; a++)
	{
		b4 = b4->next;
		if (b4 == NULL)
			return (NULL);
	}
	if (idx == 0)
	{
		add_node->next = *head;
		*head = add_node;
	}
	else if (b4->next)
	{
		add_node->next = b4->next;
		b4->next = add_node;
	}
	else
	{
		add_node->next = NULL;
		b4->next = add_node;
	}
	return (add_node);
}
