#include "main.h"

/**
 * print_rev - Function that prints a string, in reverse
 *
 * @s: string parameter input
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int log;

	for (log = 0; s[log] != '\0'; ++log)
		;
	for (--log; log >= 0; --log)
		_putchar(s[log]);
	_putchar('\n');
}
