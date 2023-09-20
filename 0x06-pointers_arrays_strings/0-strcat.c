#include "main.h"
#include <stdio.h>

/**
 * _strcat - Function that concatenates two strings
 *
 * @desk: Destination input
 * @src: Source input
 *
 * Return: Desk
 */

char *_strcat(char *desk, char *src)
{
	int a, b;

	a = 0;
	while (desk[a])
		a++;
	for (b = 0; src[b]; b++)
		desk[a++] = src[b];

	return (desk);
}
