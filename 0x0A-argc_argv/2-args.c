#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the received args
 *
 * @argc: containes number of passed args
 * @argv: array pointer
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
