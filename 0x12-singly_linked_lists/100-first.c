#include <stdio.h>

/**
 * fun_func - function that prints You're beat! and yet, you must
 * allow,\nI bore my house upon my back\n.
 */

void fun_func(void) __attribute__ ((constructor));

/**
 * fun_func - executes
 */

void fun_func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
