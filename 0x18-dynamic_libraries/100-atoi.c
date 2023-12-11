#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: String to be converted.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, digit, result = 0;

	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
		result = result * 10 + sign * digit;

		if (result > 0 && sign < 0)
			return (0);

		if (result < 0 && sign > 0)
			return (0);
		i++;
	}
	return (result);
}
