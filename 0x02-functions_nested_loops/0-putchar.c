#include "main.h"

/**
 * main - Starting point
 *
 * Description: A program that prints _putchar, followed by a new line
 *
 * Return: 1 if successful
 */
int main(void)
{
	char putChar[] = "_putchar";
	int i;

	for (i = 0; i < 8; ++i)
		_putchar(putChar[i]);
	_putchar('\n');

	return (0);
}
