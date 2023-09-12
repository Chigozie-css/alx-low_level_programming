#include "main.h"

/**
 * _abs - Computes the absloute value of integer.
 *
 * @i: Input numbers as an integer
 *
 * Return: absolute value
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
