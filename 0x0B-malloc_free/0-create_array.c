#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of char
 *
 * @size: size ofthe array
 * @c: char value
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		array[a] = c;
	return (array);
}
