#include "main.h"

/**
 * positive_or_negative - Entry point
 *
 * @i: Value of n status; zero, negative ot positive
 *
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero \n", i);
	}
	else if (i > 0)
	{
		printf("%d is postive \n", i);
	}
	else
	{
		printf("%d is negative \n", i);
	}
}
