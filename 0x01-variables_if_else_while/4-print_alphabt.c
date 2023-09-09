#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print alphabets without e and q
 *
 * Return: 0 (idf successful)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
			++alpha;
		putchar(alpha);
		++alpha;
	}
	putchar('\n');

	return (0);
}
