#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: pointer to node
 *
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *ab, *abc;

	if (head != NULL)
	{
		ab = *head;
		while ((abc = ab) != NULL)
		{
			ab = ab->next;
			free(abc);
		}
		*head = NULL;
	}
}
