#include <stdio.h>

/**
 * main - Starting point
 *
 * Description: Prints all possible combinations of single-digit numbers
 *
 * Return: 0 if successful
 */

int main(void)
{
	putchar('0');

	for (int digit = 1; digit < 10; digit++)
	{
		putchar(',');
		putchar(' ');

		putchar('0' + digit);
	}
	putchar('\n');

	return (0);
}
