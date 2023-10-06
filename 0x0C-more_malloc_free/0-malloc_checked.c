#include "main.h"

/**
 * malloc_checked - A function that allocates memory using malloc
 *
 * @b: allocated memory
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
