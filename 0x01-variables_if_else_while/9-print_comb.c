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

	for (num = 48; num < 58l; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
