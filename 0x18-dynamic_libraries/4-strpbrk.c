#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: String to search.
 * @accept: String containing the bytes to look for.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return (NULL);
}
