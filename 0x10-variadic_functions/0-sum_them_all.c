#include "variadic_functions.h"

/**
 * sum_them_all - gives the sum of numbers
 *
 * @n: parameter number which is passed
 *
 * Return: total otherwise 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int total;
	unsigned int a;
	va_list ab;

	va_start(ab, n);
	if (n == 0)
		return (0);
	for (a = 0; a < n; a++)
		total += va_arg(ab, int);
	va_end(ab);
	return (total);
}
