#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * _put - moves a string one place to the left and prints the string
 *
 * @str: string
 * @siz: string size
 *
 * Return: nothing
 */

void _put(char *str, int siz)
{
	int a, b;

	a = b = 0;
	while (a < siz)
	{
		if (str[a] != '0')
			b = 1;
		if (b || a == siz - 1)
			_putchar(str[a]);
		a++;
	}
	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string and places the answer into dest
 *
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL
 * @dest: location of the multiplication
 * @dest_index: highest index to start
 *
 * Return: pointer to dest, otherwise NULL
 */

char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int a, b, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (a = num_index, b = dest_index; a >= 0; a--, b--)
	{
		mul = (n - '0') * (num[a] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[b] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[b] = add % 10 + '0';
	}
	for (addrem += mulrem; b >= 0 && addrem; b--)
	{
		add = (dest[b] - '0') + addrem;
		addrem = add / 10;
		dest[b] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * con_digits - confirms the arguments digits
 *
 * @ap: arguments pointer
 *
 * Return: 0 if digits or 1 if not
 */

int con_digits(char **ap)
{
	int a, b;

	for (a = 1; a < 3; a++)
	{
		for (b = 0; ap[a][b]; a++)
		{
			if (ap[a][b] < '0' || ap[a][b] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - initializes a string
 *
 * @str: string to initialize
 * @len: length of string
 *
 * Return: nothing
 */

void init(char *str, int len)
{
	int a;

	for (a = 0; a < len; a++)
		str[a] = '0';
	str[a] = '\0';
}

/**
 * main - multilies two numbers
 *
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0, or exit status of 98 if failure
 */

int main(int argc, char *argv[])
{
	int len1, len2, len, ab, a;
	char *b;
	char *c;
	char e[] = "Error\n";

	if (argc != 3 || con_digits(argv))
	{
		for (ab = 0; e[ab]; ab++)
			_putchar(e[ab]);
		exit(98);
	}
	for (len1 = 0; argv[1][len1]; len1++)
		;
	for (len2 = 0; argv[2][len2]; len2++)
		;
	len = len1 + len2 + 1;
	b = malloc(len * sizeof(char));
	if (b == NULL)
	{
		for (ab = 0; e[ab]; ab++)
			_putchar(e[ab]);
		exit(98);
	}
	init(b, len - 1);
	for (ab = len2 - 1, a = 0; ab >= 0; ab--, a++)
	{
		c = mul(argv[2][ab], argv[1], len1 - 1, b, (len - 2) - a);
		if (c == NULL)
		{
			for (ab = 0; e[ab]; ab++)
				_putchar(e[ab]);
			free(b);
			exit(98);
		}
	}
	_put(b, len - 1);
	return (0);
}
