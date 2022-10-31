#include "main.h"

/**
 * read_textfile - reads a file and print it to POSIX stdout
 *
 * @letters: number of letter to read and print
 * @filename: file to read
 *
 * Return: number of letters read and printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_read, n_written;
	int fd;
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

	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	n_written = write(STDOUT_FILENO, buffer, n_read);

	if (n_written == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (n_read);
}
