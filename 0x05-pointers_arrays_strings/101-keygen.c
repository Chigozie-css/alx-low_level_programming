#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * random_char - Generates random valid passwords for the program 101-crackme
 *
 * @char_set: The character set from which to choose
 *
 * Return: The random selected character
 */

char random_char(const char *char_set)
{
	int len = strlen(char_set);
	return char_set[rand() % len];
}

/**
 * main - Generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0
 */

int main(void)
{
	const char* uppercase_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const char* lowercase_chars = "abcdefghijklmnopqrstuvwxyz";
	const char* digit_chars = "0123456789";

	srand(time(NULL));

	int password_length = 12;
	printf("Generated password: ");
	for (int i = 0; i < password_length; ++i)
	{
		const char* char_set[] = {uppercase_chars, lowercase_chars, digit_chars};
		int char_set_index = rand() % 3;
		putchar(random_char(char_set[char_set_index]));
	}
	printf("\n");
	return (0);
}
