#include "main.h"

/**
 * _memcpy - memory copy
 *
 * @dest: pointer to char
 * @src: memory source
 * @n: size
 *
 * Return: *desk
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	for (b = 0; b < n; b++)
	{
		dest[b] = src[b];
	}
	return (dest);
}
