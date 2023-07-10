#include "main.h"


/**
 * create_file - function that create a file
 *
 * @filename: name of the file to create
 * @text_content: content to write to the file
 *
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n_wrote, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	for (i = 0; text_content[i]; i++)
		;

	n_wrote = write(fd, text_content, len);

	if (n_wrote == -1 || n_wrote != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
