#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of
 * the string str. Memory for the new string is obtained with malloc,
 * and can be freed with free.
 *
 * @str: string source
 *
 * Return: a pointer to the duplicated string. It returns NULL if
 * insufficient memory was available
 */

char *_strdup(char *str)
{
	char *duplica;
	int a, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	duplica = (char *)malloc((sizeof(char) * len) + 1);
	if (duplica == NULL)
		return (NULL);
	for (a = 0; a < len; a++)
		duplica[a] = str[a];
	duplica[len] = '\0';
	return (duplica);
}
