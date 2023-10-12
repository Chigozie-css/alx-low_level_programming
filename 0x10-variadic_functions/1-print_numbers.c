#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 *
 * @separator: separates two numbers
 * @n: parameter number
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list ab;

	va_start(ab, n);
	if (separator == NULL)
		separator = "";
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(ab, int));
		if (a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ab);
}
