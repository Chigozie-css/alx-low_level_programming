#include "main.h"
#include <stdio.h>

/**
 * swap_int - Function that swaps the values of two integers
 *
 * @a: input parameter 1
 * @b: input parameter 2
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int check;

	check = *a;
	*a = *b;
	*b = check;
}
