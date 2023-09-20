#include "main.h"
#include <stdio.h>

/**
 * string_toupper - A function that changes all lowercase letters of a
 * string to uppercase.
 *
 * @s: Pointer to input char
 *
 * Return: @s
 */

char *string_toupper(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		if (s[b] >= 97 && s[b] <= 122)
			s[b] = s[b] - 32;
		b++;
	}
	return (s);
}
