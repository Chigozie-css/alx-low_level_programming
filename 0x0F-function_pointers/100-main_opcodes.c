#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - starting point
 *
 * Description: A program that prints the opcodes
 * of its own main function.
 *
 * @arg1: first arguments
 * @arg2: secnd arguments
 *
 * Return: 0
 */

int main(int arg1, char *arg2[])
{
	int index, nbytes;
	char *ptr = (char *) main;

	if (arg1 != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nbytes = atoi(arg2[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (index = 0; index < nbytes; index++)
	{
		printf("%02x", ptr[index] & 0xFF);
		if (index != nbytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
