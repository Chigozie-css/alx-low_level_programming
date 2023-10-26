#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 *
 * @n: Decimal number
 */

void print_binary(unsigned long int n)
{
	unsigned long int b4;
	int mv;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (b4 = n, mv = 0; (b4 >>= 1) > 0; mv++ )
		;
	for (;mv >= 0; mv--)
	{
		if ((n >> mv) & 1)
			printf("1");
		else
			printf("0");
	}
}
