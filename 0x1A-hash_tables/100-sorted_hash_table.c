#include "hash_tables.h"
#include <string.h>

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created sorted hash table, or NULL if an error occurs
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

 	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	for(i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}

	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
 * shash_table_set - Adds an element to a sorted hash table
 * @ht: The sorted hash table
 * @key: The key
 * @value: The value
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current_node, *prev_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	current_node = ht->array[index];
	prev_node = NULL;

	while (current_node != NULL && strcmp(current_node->key, key) < 0)
	{
		prev_node = current_node;
		current_node = current_node->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = current_node;

	if (prev_node == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		prev_node->next = new_node;
	}

	if (current_node == NULL)
	{
		if (ht->stail != NULL)
		{
			ht->stail->snext = new_node;
			new_node->sprev = ht->stail;
		}
		else
		{
			ht->shead = new_node;
		}
	
		ht->stail = new_node;
		new_node->snext = NULL;
	}
	else
	{
		if (prev_node == NULL)
		{
			new_node->snext = ht->shead;
			ht->shead->sprev = new_node;
			ht->shead = new_node;
		}
		else
		{
			new_node->sprev = prev_node->sprev;
			new_node->snext = prev_node->snext;
			prev_node->sprev->snext = new_node;
			prev_node->snext->sprev = new_node;
		}
	}

	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key in a sorted hash table
 * @ht: The sorted hash table
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if the key is not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current_node;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node != NULL && strcmp(current_node->key, key) < 0)
	{
		current_node = current_node->next;
	}

	if (current_node != NULL && strcmp(current_node->key, key) == 0)
	{
		return (current_node->value);
	}

	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current_node;

	if (ht == NULL)
		return;

	printf("{");

	current_node = ht->shead;

	while (current_node != NULL)
	{
		printf("'%s': '%s'", current_node->key, current_node->value);
	
		current_node = current_node->snext;
		if (current_node != NULL)
			printf(", ");
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current_node;

	if (ht == NULL)
		return;

	printf("{");

	current_node = ht->stail;

	while (current_node != NULL)
	{
		printf("'%s': '%s'", current_node->key, current_node->value);
	
		current_node = current_node->sprev;
	
		if (current_node != NULL)
			printf(", ");
	}

	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current_node, *temp_node;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
	
		while (current_node != NULL)
		{
			temp_node = current_node;
			current_node = current_node->next;

			free(temp_node->key);
			free(temp_node->value);
			free(temp_node);
		}
	}

	free(ht->array);
	free(ht);
}
