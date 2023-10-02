#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies
 *
 * @argc: containes number of passed args
 * @argv: pointer that holds the passed args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = (atoi(argv[1]) * atoi(argv[2]));
			printf("%d\n", a);
	}
	return (0);
}
