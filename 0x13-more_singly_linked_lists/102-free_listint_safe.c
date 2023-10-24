#include "lists.h"

/**
 * free_listint_safe -  frees a listint_t list.
 *
 * @h: pointer to node
 *
 * Return:  number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t al = 0;
	int bf;
	listint_t *cp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		bf = *h - (*h)->next;
		if (bf > 0)
		{
			cp = (*h)->next;
			free(*h);
			*h = cp;
			al++;
		}
		else
		{
			free(*h);
			*h = NULL;
			al++;
			break;
		}
	}
	*h = NULL;
	return (al);
}
