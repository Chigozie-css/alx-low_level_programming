#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: a list of types of args passed to the function
 *
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	int a;
	int b;
	char *ab;
	va_list abc;

	va_start(abc, format);
	a = 0;
	while (format != NULL && format[a] != '\0')
	{
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(abc, int));
				b = 0;
				break;
			case 'i':
				printf("%i", va_arg(abc, int));
				b = 0;
				break;
			case 'f':
				printf("%f", va_arg(abc, double));
				b = 0;
				break;
			case 's':
				ab = va_arg(abc, char*);
				if (ab == NULL)
					ab = "(nil)";
				printf("%s", ab);
				b = 0;
				break;
			default:
				b = 1;
				break;
		}
		if (format[a + 1] != '\0' && b == 0)
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(abc);
}
