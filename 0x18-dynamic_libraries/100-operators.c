#include "main.h"

/* Function prototypes */
int add(int i, int k);
int sub(int i, int k);
int mul(int i, int k);
int custom_div(int i, int k);
int mod(int i, int k);

/**
 * add - adds two integers
 * @i: first integer to add
 * @k: second integer to add
 * Return: the sum
 */
int add(int i, int k)
{
	return (i + k);
}

/**
 * sub - subtracts two integers
 * @i: first integer to subtract from
 * @k: second integer to subtract
 * Return: the result of subtraction
 */
int sub(int i, int k)
{
	return (i - k);
}

/**
 * mul - multiplies two integers
 * @i: first integer to multiply
 * @k: second integer to multiply
 * Return: the product
 */
int mul(int i, int k)
{
	return (i * k);
}

/**
 * custom_div - divides two integers
 * @i: dividend integer
 * @k: divisor integer
 * Return: the quotient
 */
int custom_div(int i, int k)
{
	return (i / k);
}

/**
 * mod - finds the modulus of two integers
 * @i: first integer
 * @k: second integer
 * Return: the modulus
 */
int mod(int i, int k)
{
	return (i % k);
}