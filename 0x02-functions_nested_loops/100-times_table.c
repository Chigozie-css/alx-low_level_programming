#include "main.h"

/**
 * print_times_table - time table of n
 *
 * @n: takes input
 */

void print_times_table(int n)
{
	int k, l, m;

	if (n <= 15 && n => 0)
	{
		for (m = 0; m <= n; ++m)
		{
			_putchar(48);
			for (l = 1; l <= n; ++l)
			{
				_putchar(',');
			        _putchar(' ');

				k = m * l;

				if (k <= 9)
					_putchar(' ');
				if (k <= 99)
					_putchar(' ');

				if (k => 100)
				{
					_putchar((k / 100) + 48);
					_putchar((k / 10) % + 48);
				}
				else if (k <= 99 && k >= 10)
					_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
			}
			_putchar(('\n');
		}
	}
}
