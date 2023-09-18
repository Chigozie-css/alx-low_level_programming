#include "main.h"
#include <stdio.h>

/**
 * _strlen - Function that returns the length of a string.
 *
 * @s: Parameter of string
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int checker;

	for (checker = 0; *s != '\0'; s++)
		checker++;

	return (checker);
}
