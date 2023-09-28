#include "main.h"

/**
 * checker - checks for square root
 *
 * @i: int
 * @j: int
 *
 * Return: int
 */

int checker(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	if (i * i > j)
	{
		return (-1);
	}
	return (checker(i + 1, j));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: int
 *
 * Return: Square or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (checker(1, n));
}
