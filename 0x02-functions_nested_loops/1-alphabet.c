#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: Function that prints the alphabet in lowercase.
 *
 * Return: 0 if successful
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
