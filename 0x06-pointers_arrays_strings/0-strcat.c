#include "main.h"

/**
 * _strcat - function that concatenate two strings
 * @src: source string
 * @dest: destination sring
 * Return:pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int len_dest = 0;
	int len_src = 0;

	while (*dest++)
		len_dest++;

	while (*src++)
		dest[len_dest + len_src] = src[len_src];

	dest[len_dest + len_src] = '\0';

	return (dest);
}
