#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number for byte to copy form src
 *
 * Return: A pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) && i < n)
		*(dest + i++) = *(src + i);
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
