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
	int i = 0;
	int j = 0;

	while (*dest++)
		i++;

	for (j = 0; j <= i && src[i] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}
