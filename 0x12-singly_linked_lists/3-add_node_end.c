#include "lists.h"

/**
 * check_len - finds string length
 *
 * @s: string for finding
 *
 * Return: unsigned int
 */

unsigned int check_len(char *s)
{
	unsigned int a;

	for (a = 0; s[a]; a++)
		;
	return (a);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: list head
 * @str: string element
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *update, *shift;

	if (str == NULL)
		return (NULL);
	update = malloc(sizeof(list_t));
	if (update == NULL)
		return (NULL);
	update->str = strdup(str);
	if (update->str == NULL)
	{
		free(update);
		return (NULL);
	}
	update->len = check_len(update->str);
	update->next = NULL;
	if (*head == NULL)
	{
		*head = update;
		return (update);
	}
	shift = *head;
	while (shift->next)
		shift = shift->next;
	shift->next = update;
	return (update);
}
