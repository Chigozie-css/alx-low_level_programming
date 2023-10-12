#include "variadic_functions.h"

/**
 * print_strings - prints string
 *
 * @separator: separates two strings
 * @n: parameter number
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int a;
	va_list ab;

	va_start(ab, n);
	if (separator == NULL)
		separator = "";
	for (a = 0; a < n; a++)
	{
		str = va_arg(ab, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ab);
}
