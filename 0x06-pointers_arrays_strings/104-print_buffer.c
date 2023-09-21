#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints buffer
 *
 * @b: Buffer to print
 * @size: Buffer size
 */

void print_buffer(char *b, int size)
{
	int num1, num2;

	for (num1 = 0; num1 < size; num1 += 10)
	{
		printf("%08x: ", num1);

		for (num2 = 0; num2 < 10; num2++)
		{
			if ((num2 + num1) >= size)
				printf("  ");
			else
				printf("%02x", *(b + num2 + num1));
			if ((num2 % 2) != 0 && num2 != 0)
				printf(" ");
		}
		for (num2 = 0; num2 < 10; num2++)
		{
			if ((num2 + num1) >= size)
				break;
			else if (*(b + num2 + num1) >= 31 &&
				 *(b + num2 + num1) <= 126)
				printf("%c", *(b + num2 + num1));
			else
				printf(".");
		}
		if (num1 >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
	printf("\n");
}

