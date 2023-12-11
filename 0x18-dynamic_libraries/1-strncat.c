#include "main.h"

/**
 * _strncat - Concatenates n bytes from a string to another.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of bytes of str to concatenate.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0')
		i++;
	for (int j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
