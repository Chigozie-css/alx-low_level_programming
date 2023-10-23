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
	listint_t *b4, *add_node;
	unsigned int a;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		b4 = *head;
		for (a = 0; a < idx - 1 && b4 != NULL; a++)
		{
			b4 = b4->next;
		}
		if (b4 == NULL)
			return (NULL);
	}
	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
		return (NULL);
	add_node->n = n;
	if (idx == 0)
	{
		add_node->next = *head;
		*head = add_node;
		return (add_node);
	}
	add_node->next = b4->next;
	b4->next = add_node;
	return (add_node);
}
