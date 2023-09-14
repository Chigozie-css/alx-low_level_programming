#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: n is number the times the _ character should be printed
 */

void print_line(int n)
{
	int strLn;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (strLn = 1; strLn <= n; ++strLn)
			_putchar('_');
		_putchar('\n');
	}
}
