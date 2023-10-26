#include "main.h"

/**
 * flip_bits - converts one number to another
 *
 * @n: number one
 * @m: number two(i.e the num to convert)
 *
 * Return: number of bits that was needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	int check;

	a = n ^ m;
	check = 0;
	while (a)
	{
		check++;
		a &= (a - 1);
	}
	return (check);
}
