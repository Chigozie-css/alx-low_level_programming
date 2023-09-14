#include "main.h"

/**
 * more_numbers - prints 10 times the number, from 0 to 14
 *
 * Return: 0 always
 */

void more_numbers(void)
{
	int digit, row, count;

	for (row = 0; row <= 10; ++row)
	{
		for (count = 0; count <= 14; ++count)
		{
			digit = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				digit = count % 10;
			}
			_putchar(digit + 48);
		}
		_putchar('\n');
	}
}
