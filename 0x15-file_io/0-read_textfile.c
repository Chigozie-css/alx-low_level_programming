#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 *
 * @filename: pointer to file name.
 * @letters: letters the function should read and print
 *
 * Return: the actual number of letters it could read
 * and print or 0 if fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, c, d;
	char *b;

	if (filename == NULL)
		return (0);
	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);
	a = open(filename, O_RDONLY);
	c = read(a, b, letters);
	d = write(STDOUT_FILENO, b, c);
	if (a == -1 || c == -1 || d == -1 || d != c)
	{
		free(b);
		return (0);
	}
	free(b);
	close(a);

	return (d);
}
