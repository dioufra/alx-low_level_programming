#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * @n: number of bytes to copy
 *
 * Return: a pointer to the memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
