#include "main.h"

/**
 * checker - Checks for prime number
 *
 * @i: int
 * @j: int
 * Return: int
 */

int checker(int i, int j)
{
	if (j < 2 || j % i == 0)
	{
		return (0);
	}
	else if (i > j / 2)
	{
		return (1);
	}
	else
	{
		return (checker(i + 1, j));
	}
}

/**
 * is_prime_number - eturns 1 if the input integer is a prime number
 *
 * @n: int
 * Return: int
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (checker(2, n));
}
