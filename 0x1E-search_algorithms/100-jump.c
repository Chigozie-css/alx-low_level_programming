#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array
 * using the Jump search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of the value if found, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	int jump = sqrt(size);
	int left = 0;
	int right = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", right, array[right]);

		if (array[right] >= value || right >= (int)size)
			break;

		left = right;
		right += jump;
	} while (right < (int)size);

	printf("Value found between indexes [%d] and [%d]\n", left, right);

	for (int i = left; i <= right && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
