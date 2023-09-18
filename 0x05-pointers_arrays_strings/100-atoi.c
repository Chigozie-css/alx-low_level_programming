#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: string input
 *
 * Return: converted  interger from string
 */

void _atoi(char *s)
{
	unsigned int digit = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			digit = (digit * 10) + (*s - '0');
		else if (digit > 0)
			break;
	} while (*s++);

	return (digit * sign);
}
