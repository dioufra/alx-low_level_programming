#include "main.h"

/**
 * append_text_to_file - append text at end of a file
 *
 * @filename: file
 * @text_content: content to append
 *
 * Return: 1 on success, -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nwrote, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	for (len = 0; text_content[len]; len++)
		;

	nwrote = write(fd, text_content, len);

	if (nwrote == -1 || nwrote != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
