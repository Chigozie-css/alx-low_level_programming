#include "main.h"

/**
 * _strlen_recursion -  function that returns the length of a string.
 *
 * @s: string
 * Return: nb
 */

int _strlen_recursion(char *s)
{
	int nb = 0;

	if (*s)
	{
		nb++;
		nb += _strlen_recursion(s + 1);
	}
	return (nb);
}
