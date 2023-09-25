#include "main.h"

/**
 * _memset - memory set
 *
 * @s: pointer to char
 * @b: data to change
 * @n: the index
 *
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
