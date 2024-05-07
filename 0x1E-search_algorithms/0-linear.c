#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * using Linear search
 *
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value if found, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	for (int i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
