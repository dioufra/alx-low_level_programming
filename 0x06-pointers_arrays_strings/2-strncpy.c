#include "main.h"

/**
 * *_strncpy - function that copies a strings
 *
 * @src: source string
 * @dest: destination sring
 * @n: maximum number of bytes
 *
 * Return:pointer to the concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
