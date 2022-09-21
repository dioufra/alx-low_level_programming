#include "main.h"

/**
 * _trcpy - Write a function that reverses a string.
 * @dest: destination of copy
 * @src: source of copy
 * Return: destination(dest) pointer
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while ((*dest++ = *src++))
		;

	return (tmp);
}
