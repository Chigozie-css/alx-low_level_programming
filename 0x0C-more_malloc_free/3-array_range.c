#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: minimum range value
 * @max: maximum range value
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *a;
	int b, area;

	if (min > max)
	{
		return (NULL);
	}
	area = max - min + 1;
	a = malloc(sizeof(int) * area);
	if (a == NULL)
	{
		return (0);
	}
	for (b = 0; min <= max; b++)
	{
		a[b] = min++;
	}
	return (a);
}
