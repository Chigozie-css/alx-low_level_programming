#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head == NULL)
		return;

 	while (head->prev != NULL)
        head = head->prev;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
