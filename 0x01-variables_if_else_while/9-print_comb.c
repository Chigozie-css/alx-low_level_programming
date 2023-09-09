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
	int num;

	putchar('0');

	for (num = 1; num < 10; num++)
	{
		putchar(',');
		putchar(' ');

		putchar('0' + num);
	}
	putchar('\n');

	return (0);
}
