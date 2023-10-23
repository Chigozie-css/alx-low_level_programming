#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @head: pointerto node
 * @n: adds in a new node
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node;

	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
		return (NULL);
	if (*head == NULL)
		add_node->next = NULL;
	else
		add_node->next = *head;
	add_node->n = n;
	*head = add_node;
	return (*head);
}
