#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return:  converted number, or 0 if
 * there is one or more chars in the string b that is
 * not 0 or 1 b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a, ab;
	int c;

	if (b == NULL)
		return (0);
	for (c = 0; b[c]; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
	}
	for (ab = 1, a = 0, c--; c >= 0; c--, ab *= 2)
	{
		if (b[c] == '1')
			a += ab;
	}
	return (a);
}
