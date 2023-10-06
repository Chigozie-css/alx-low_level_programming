#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: char one
 * @s2: char two
 * @n: unsigned int
 *
 * Return: m
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *m;

	if (s1 == NULL)
	{
		a = 0;
	}
	else
	{
		for (a = 0; s1[a]; ++a)
			;
	}
	if (s2 == NULL)
	{
		b = 0;
	}
	else
	{
		for (b = 0; s2[b]; ++b)
			;
	}
	if (b < n)
		b = n;
	m = malloc(sizeof(char) * (a + b + 1));
	if (m == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		m[c] = s1[c];
	for (c = 0; c < b; c++)
		m[c + a] = s2[c];
	m[a + b] = '\0';
	return (m);
}
