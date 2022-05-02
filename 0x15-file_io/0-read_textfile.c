#include "main.h"

/**
 * read_textfile -  function reads a text file
 * and prints it to the POSIX standard output.
 *
 * @filename: is a pointer to file
 * @letters: number of lettters to output.
 *
 * Return: actual number of letters it could
 * read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	ssize_t n_read, n_write;

	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	n_read = read(fd, buffer, letters);

	/* read */
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* write */
	n_write = write(STDOUT_FILENO, buffer, n_read);

	if (n_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (n_read);
}
