#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Program that takes 4 arguments where 2 are
 * int variables plus an operator to perform
 * a function between the two numbers
 * Usage: ./calc num1 operator num2
 *
 * @arg1: first arguments
 * @arg2: second arguments
 *
 * Return: 0
 */

int main(int arg1, char *arg2[])
{
	int num1, num2;
	char *operator;

	if (arg1 != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(arg2[1]);
	num2 = atoi(arg2[3]);
	operator = arg2[2];
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == 47 || *operator == 37) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
