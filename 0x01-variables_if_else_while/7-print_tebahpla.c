#include <stdio.h>

/**
 * main - Starting point
 *
 * Description: Prints the lowercase alphabet in reverse
 *
 * Return: 0 (if successful)
 */

int main(void)
{
	char alpha = 'z';

	while (alpha <= 'a')
	{
		putchar(alpha);
		--alpha;
	}
	putchar('\n');

	return (0);
}
