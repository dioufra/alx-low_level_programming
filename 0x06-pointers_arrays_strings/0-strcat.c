#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function that concatenate two strings
 *
 * @src: source string
 * @dest: destination sring
 *
 * Return:pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int dest_len;
	int i = 0;

	dest_len = _strlen(dest);

	for (i = 0; i <= dest_len && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}

