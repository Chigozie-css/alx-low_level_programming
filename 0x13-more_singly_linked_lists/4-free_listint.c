#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 *
 * @head: pointer
 *
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *ab;

	while ((ab = head) != NULL)
	{
		head = head->next;
		free(ab);
	}
}
