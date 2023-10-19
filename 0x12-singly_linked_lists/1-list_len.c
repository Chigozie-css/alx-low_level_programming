#include "lists.h"

/**
 * list_len - returns the number of elements in a linked
 * list_t list.
 *
 * @h: list number
 *
 * Return: nodes number
 */

size_t list_len(const list_t *h)
{
	int a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
