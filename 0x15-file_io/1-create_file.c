#include "main.h"

/**
 * create_file - functin creates a file
 *
 * @filename: is a pointer to file.
 * @text_content: is a pointer to text
 *
 * Return: 1 on success, 0 otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, length = 0;

	ssize_t n_write;

	if (filename == NULL)
		return (-1);

	/* open file and truncate if exist, else create and set to Write only */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content[length] != '\0')
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
