#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to search in
 * @accept: prefix substring
 *
 * Return: a pointer to the byte in s matching one of the bytes in accept
 * Otherwise, return NULL (no byte if found)
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
