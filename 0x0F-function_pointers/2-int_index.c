#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array pointer
 * @size: size of array
 * @cmp: calls the check index in the array if it matches
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;
	bool b;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (a = 0; a < size; a++)
		{
			b = cmp(array[a]);
			if (b == TRUE)
				return (a);
		}
	}
	return (-1);
}
