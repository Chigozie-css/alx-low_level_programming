#include "main.h"

/**
 * checker - Compares if identical
 *
 * @s1: Address one
 * @s2: Address two
 * @i: Index
 * @j: Special index
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (0);
	if (s1[i] == s2[j])
		return (checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (checker(s1, s2, i + 1, j) || checker(s1, s2, i, j + 1));
	return (0);
}

/**
 * wildcmp - Compares two strings and returns 1 and so on
 *
 * @s1: Address for string
 * @s2: Address for string
 *
 * Return: 1 if identical
 */

int wildcmp(char *s1, char *s2)
{
	return (checker(s1, s2, 0, 0));
}
