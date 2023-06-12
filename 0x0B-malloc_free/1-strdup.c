#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 *
 * @str: string to copy
 *
 * Return: a pointer to the duplicated string, or NULL
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *buffer;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	buffer = malloc(sizeof(char) * (len + 1));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		buffer[i] = str[i];

	buffer[len] = '\0';
	return (buffer);
}
