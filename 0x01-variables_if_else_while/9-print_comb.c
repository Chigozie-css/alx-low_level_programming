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
	int num = 0;

	while (num <= 9)
		putchar(num +48);

	if (num != 9)
	{
		putchar(',');
		putchar(' ');
	}
	++num;

	putchar('\n');

	return (0);
}
