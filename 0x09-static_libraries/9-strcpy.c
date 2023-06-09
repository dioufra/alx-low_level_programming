#include "main.h"

/**
 * _strcpy - copy a string to a given buffer
 *
 * @dest: pointer to buffer
 * @src: pointer to string
 *
 * Return: point to buffer (dest)
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while ((*dest++ = *src++))
		;
	return (tmp);
}
