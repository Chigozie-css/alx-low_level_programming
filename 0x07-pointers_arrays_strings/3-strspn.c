#include "main.h"

/**
 * _strspn - The length of a prefix substring.
 *
 * @s: string od substring
 * @accept: accepted char
 *
 * Return: length of occurance
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int chara = 0;
	char *text = accept;

	while (*s++)
	{
		while (*accept++)
			if ((*s - 1) == *(accept - 1))
			{
				chara++;
				break;
			}
		if (!(*--accept))
			break;
		accept = text;
	}
	return (chara);
}
