#include "main.h"
#define NULL 0

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: target matches
 *
 * Return: if match found, return a pointer to this character,
 * if no match found return NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (&s[i]);
			}
		}
		i++;
	}
	return (NULL);
}
