#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 *
 * @h: pointer
 *
 * Return: number of item/element.
 */

size_t listint_len(const listint_t *h)
{
	size_t item = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		if (h->n != '\0')
			item++;
		h = h->next;
	}
	return (item);
}
