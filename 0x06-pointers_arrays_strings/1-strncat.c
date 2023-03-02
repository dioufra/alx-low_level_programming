#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to use form src
 * Description: src does not need to be null terminated
 *		if it contains n or more bytes
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (*(dest + i))
		i++;
	for (j = 0; j < n; j++)
		*(dest + i++) = *(src + j);
	*(dest + i) = '\0';
	return (dest);
}
