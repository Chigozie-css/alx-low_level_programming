#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: allocates memory for array
 * @size: allocates the size of memory
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < (nmemb * size); b++)
	{
		a[b] = 0;
	}
	return (a);
}
