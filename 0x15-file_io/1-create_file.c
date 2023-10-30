#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: pointer to the name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int a, b, strlen = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (strlen = 0; text_content[strlen];)
			strlen++;
	}
	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(a, text_content, strlen);
	if (a == -a || b == -1)
		return (-1);
	close(a);
	return (1);
}
