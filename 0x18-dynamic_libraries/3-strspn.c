#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String to evaluate.
 * @accept: String containing the list of characters to match in s.
 *
 * Return: The number of bytes in the initial segment
 * of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
		}
		if (!found)
		{
			return (count);
		}
	}
	return (0);
}
