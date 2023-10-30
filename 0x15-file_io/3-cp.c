#include "main.h"

char *create_p(char *file);
void end_p(int abc);

/**
 * create_p - allocate bytes for the program
 *
 * @file: name of file to be stored
 *
 * Return: pointer/ab
 */

char *create_p(char *file)
{
	char *ab;

	ab = malloc(sizeof(char) * 1024);
	if (ab == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (ab);
}

/**
 * end_p - closes file descriptor
 *
 * @abc: the file to be closed
 */

void end_p(int abc)
{
	int a;

	a = close(abc);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close abc %d\n", abc);
		exit(100);
	}
}

/**
 * main - copies from one file to another
 *
 * @argc: the supplied arguments
 * @argv: arguments pointer
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int take, put_in, a, c;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	b = create_p(argv[2]);
	take = open(argv[1], O_RDONLY);
	a = read(take, b, 1024);
	put_in = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (take == -1 || a == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(b);
			exit(98);
		}
		c = write(put_in, b, a);
		if (put_in == -1 || c == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(b);
			exit(99);
		}
		a = read(take, b, 1024);
		put_in = open(argv[2], O_WRONLY | O_APPEND);
	} while (a > 0);
	free(b);
	end_p(take);
	end_p(put_in);
	return (0);
}
