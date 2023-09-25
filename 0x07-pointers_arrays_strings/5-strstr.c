#include "main.h"

/**
 * _strstr -  locates a substring
 *
 * @haystack: for matching substring
 * @needle: substring to search for
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;
		while (*b != '\0' && *haystack == *b)
		{
			haystack++;
			b++;
		}
		if (!*b)
			return (a);
		haystack++;
	}
	return ('\0');
}
