#include "main.h"

/**
 * rev_string - Function that reverses a string
 *
 * @s: string input
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int a, b;
	char ab;

	for (a = 0; s[a] != '\0'; ++a)
		;
	for (b = 0; b < a / 2; ++b)
	{
		ab = s[b];
		s[b] = s[a - 1 - b];
		s[a - 1 - b] = ab;
	}
}
