#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
		{
			/* Continue loop until the end of needle or a mismatch is found */
		}
		if (needle[j] == '\0')
			/* Entire needle was found, return pointer to the start of substring */
			return (&haystack[i]);
	}

	return (NULL);
}
