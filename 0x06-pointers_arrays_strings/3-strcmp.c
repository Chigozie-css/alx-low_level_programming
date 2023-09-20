#include "main.h"
#include <stdio.h>

/**
 * _strcmp - A function that compares two strings.
 *
 * @s1: First input to compare
 * @s2: Second input to compare
 *
 * Return: 0 if s1 and s2  are equal and do otherwise if negative
 * or positive
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, b;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			b = s1[a] - s2[a];
			break;
		}
		else
		{
			b = s1[a] - s2[a];
		}
		a++;
	}
	return (b);
}
