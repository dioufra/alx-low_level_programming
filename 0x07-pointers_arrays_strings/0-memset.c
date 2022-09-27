#include "main.h"

/**
 * _memset - function that fills the memory with a constant byte.
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: first number of bytes of the memory pointed by s
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char **p = &s;
	unsigned int i = 0;

	while (i < n)
	{
		*(*p + i) = b;
		i++;
	}
	return (s);
}
