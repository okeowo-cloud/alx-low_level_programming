#include "main.h"

/**
 * append_text_to_file - function appends text at the end of a file.
 *
 * @filename: is a pointer to file
 * @text_content: is a pointer to text
 *
 * Return: 1 if successful, -1 otherwise.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length = 0;

	ssize_t n_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content[length])
		length++;

	n_write = write(fd, text_content, length);

	if (n_write == -1 || n_write != length)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
