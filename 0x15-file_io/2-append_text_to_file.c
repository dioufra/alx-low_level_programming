#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: name of the file to append to
 * @text_content: string to append at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_written;
	int letters = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[letters])
			letters++;

		n_written = write(fd, text_content, letters);

		if (n_written == -1)
			return (-1);
	}

	close(fd);
	return (1);
}