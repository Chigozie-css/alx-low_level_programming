#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: pointer to node
 *
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t check_node = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		check_node++;
	}
	printf("%d\n", h->n);
	return (check_node);
}
