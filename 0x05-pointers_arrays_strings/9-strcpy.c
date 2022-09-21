#include "main.h"

/**
 * trcpy - Write a function that reverses a string.
 * @dest: destination of copy
 * @src: source of copy
 * Return: destination(dest) pointer
 */

char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
