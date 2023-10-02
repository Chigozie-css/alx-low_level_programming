#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints passed arguments number
 *
 * @argc: container of passed arguments
 * @argv: pointer that holds the arguments
 *
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int a = 0, b;

	while (a < argc)
	{
		b = a;
		a++;
	}
	printf("%d\n", b);
	return (0);
}
