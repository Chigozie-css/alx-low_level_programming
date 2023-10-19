#include "lists.h"

/**
 * check_len - returns string length
 *
 * @charac: character
 *
 * Return: int
 */

int check_len(const char *charac)
{
	int a = 0;

	while (charac[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: ls head
 * @str: string element
 *
 * Return: number of node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *_top;

	_top = malloc(sizeof(list_t));
	if (_top == NULL)
		return (NULL);
	_top->str = strdup(str);
	_top->len = check_len(str);
	_top->next = *head;
	*head = _top;
	return (_top);
}
