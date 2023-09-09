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
	char num[] = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9\n";

	for (int i = 0; i < sizeof(num) - 1; i++)
	{
		putchar(num[i]);
	}

	return (0);
}
