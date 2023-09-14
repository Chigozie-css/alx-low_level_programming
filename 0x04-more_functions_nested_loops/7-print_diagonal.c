#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line
 *
 * @n:  is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int set, gap;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (set = 0; set < n; ++set)
		{
			for (gap = 0; gap < set; ++gap)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
