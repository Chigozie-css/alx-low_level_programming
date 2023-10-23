#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 *
 * @head: pointer to node
 * @idx: index of the list where the new node is added
 * @n: item to be added to the new node
 *
 * Return:  address of the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
