#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (head == NULL)
	{
		return (0);
	}
	const dlistint_t *current = head;
	while (current->next !=NULL)
	{
		current = current->next;
	}
	while (current = NULL)
	{
		printf("%d\n", current->n);
		current = current->prev;
		count++;
	}
	return (count);
}
