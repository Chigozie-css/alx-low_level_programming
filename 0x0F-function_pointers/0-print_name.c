#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_name - print name
 *
 * @name: name to print
 * @f: void pointer
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
