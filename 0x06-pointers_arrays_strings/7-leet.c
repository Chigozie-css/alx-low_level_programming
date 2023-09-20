#include "main.h"
#include <stdio.h>

/**
 * leet - A function that encodes a string into 1337.
 *
 * @s: String input
 *
 * Return: @s
 */

char *leet(char *s)
{
	int k, v = 0;
	int ab[] = {97, 101, 111, 116, 108};
	int bc[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (s[v] != '\0')
	{
		for (k = 0; k < 5; k++)
		{
			if (s[v] == ab[k] || s[v] == bc[k])
			{
				s[v] = n[k];
				break;
			}
		}
		v++;
	}
	return (s);
}
