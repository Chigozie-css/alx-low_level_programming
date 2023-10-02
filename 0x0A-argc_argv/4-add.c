#include <stdlib.h>
#include <stdio.h>

/**
 * isIndex - check if string array is indexTwo
 *
 * @indexTwo: string
 *
 * Return: 0
 */

int isIndex(char *indexTwo)
{
	int i = 0;

	while (indexTwo[i] != '\0')
	{
		if (!(indexTwo[i] >= '0' && indexTwo[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 *
 * @argc: container
 * @argv: pointer
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int b, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (int b = 1; b < argc; b++)
	{
		if (isIndex(argv[b]))
		{
			sum += atoi(argv[b]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

