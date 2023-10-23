#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * a listint_t linked list.
 *
 * @head: pointer to node
 *
 * Return: sum of all the data (n) or 0 if empty
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
