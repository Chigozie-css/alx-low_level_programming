#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the program 101-crackme
 *
 * Return: 0 always
 */

char random_char(const char* char_set)
{
	int len = strlen(char_set);
	return char_set[rand() % len];
}

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
