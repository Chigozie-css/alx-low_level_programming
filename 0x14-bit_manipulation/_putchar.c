#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c
 *
 * @c: character to print
 *
 * Return: 1 if success and -1 if error is seen.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
