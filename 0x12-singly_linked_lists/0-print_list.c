#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: list name.
 *
 * Return: number of node
 */

size_t print_list(const list_t *h)
{
	int check = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		check++;
		h = h->next;
	}
	return (check);
}
