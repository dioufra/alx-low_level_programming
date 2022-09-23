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
	char *copy = dest;
	int i = 1;

	while (*copy++)
		i++;

	while (*src)
		dest[i] = *src++;

	return (dest);
}

