#include <stdio.h>

/**
 * main - Starting point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (if successful)
 */

int main(void)
{
	char num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		++num;
	}
	putchar('\n');

	return (0);
}
