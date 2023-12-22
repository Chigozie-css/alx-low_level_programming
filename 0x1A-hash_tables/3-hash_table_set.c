#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @table: Pointer to the hash table
 * @key: Key to use for the new element 
 * @value: Value to store for the new element
 *
 * Return: 1 on success, 0 on failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *value_copy;
	unsigned long int index;
	hash_node_t *bucket;
	hash_node_t *new_node;

	if (!ht || !key || !*key || !value)
        return (0);

	value_copy = strdup(value);
	if (!value_copy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			free(bucket->value);
			bucket->value = value_copy;
			return (1);
		}
		bucket = bucket->next;
	}

	new_node = calloc(1, sizeof(hash_node_t));
	if (!new_node)
	{
		free(value_copy);
		return (0);
	}

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		free(value_copy);
		return (0);
	}

	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
