#include "main.h"
#include <stdio.h>

/**
 * _strncat- function that concatenates two strings.
 *
 * @dest: Pointer's destination
 * @src: Pointer's source
 * @n: Bytes from src
 *
 * Return: @desk
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;
	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[a + b] = src[b];
	dest[a + b] = '\0';
	return (dest);
}
