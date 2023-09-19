#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by src
 *
 * @src: Source of string parameter
 * @desk: String destination
 *
 * Return: Pointer to desk
 */

char *_strcpy(char *desk, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		desk[b] = src[a];
		++b;
	}
	desk[b] = '\0';

	return (desk);
}
