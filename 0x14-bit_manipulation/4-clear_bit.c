#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * @n: pointer
 * @index:  starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;
	unsigned int ab;

	if (index > 64)
		return (-1);
	ab = index;
	for (a = 1; ab > 0; a *= 2, ab--)
		;
	if ((*n >> index) & 1)
		*n -= a;
	return (1);
}
