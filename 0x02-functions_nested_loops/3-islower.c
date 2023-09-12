#include "main.h"

/**
 * _islower - Shows 1 if the input is a lpwercase
 *
 * @c: checks input of function
 *
 * Return: 0 if successful
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
