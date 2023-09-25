#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers.
 *
 * @a: input pointer
 * @size: matrix size
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int b, d1, d2;

	d1 = 0;
	d2 = 0;
	for (b = 0; b < (size * size); b++)
	{
		if (b % (size + 1) == 0)
			d1 += a[b];
		if (b % (size - 1) == 0 && b != 0 && b < size * size - 1)
			d2 += a[b];
	}
	printf("%d, %d\n", d1, d2);
}
