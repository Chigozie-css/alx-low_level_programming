#include "main.h"
#include <stdio.h>

/**
 * reverse_array - A function that reverses the content
 * of an array of integers.
 *
 * @a: Array pointer
 * @n: Number of element to swap
 *
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int cont, b, c;

	b = 0;
	c = n - 1;

	while (b < c)
	{
		cont = a[b];
		a[b] = a[c];
		a[c] = cont;
		b++;
		c--;
	}
}
