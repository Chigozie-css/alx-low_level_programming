#include "lists.h"

/**
 * reloc - reallocates memory for an array of pointers
 * to the nodes in a linked list
 *
 * @a: list to append
 * @sz: size of the new list
 * @add: new node to add to the list
 *
 * Return: pointer to the new list(add_list)
 */

const listint_t **reloc(const listint_t **a, size_t sz, const listint_t *add)
{
	const listint_t **add_list;
	size_t b;

	add_list = malloc(sz * sizeof(listint_t *));
	if (add_list == NULL)
	{
		free(a);
		exit(98);
	}
	for (b = 0; b < sz - 1; b++)
		add_list[b] = a[b];
	add_list[b] = add;
	free(a);
	return (add_list);
}

/**
 * print_listint_safe -  prints a listint_t linked list.
 *
 * @head: pointer to node
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t b, num = 0;
	const listint_t **a = NULL;

	while (head != NULL)
	{
		for (b = 0; b < num; b++)
		{
			if (head == a[b])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(a);
				return (num);
			}
		}
		num++;
		a = reloc(a, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(a);
	return (num);
}
