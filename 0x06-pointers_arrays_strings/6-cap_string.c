#include "main.h"
#include <stdio.h>

/**
 * cap_string - A function that capitalizes all words of a string.
 *
 * @s: Array pointer
 *
 * Return: @s
 */

char *cap_string(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] >= 97 && s[a] <= 122)
		{
			if (a == 0)
			{
				s[a] -= 32;
			}
			if (s[a - 1] == 32 || s[a - 1] == 9 || s[a - 1] == 10 ||
				s[a - 1] == 44 || s[a - 1] == 59 || s[a - 1] == 46 ||
				s[a - 1] == 33 || s[a - 1] == 63 || s[a - 1] == 34 ||
				s[a - 1] == 40 || s[a - 1] == 41 || s[a - 1] == 123 ||
				s[a - 1] == 124)
			{
				s[a] -= 32;
			}
		}
		a++;
	}
	return (s);
}
