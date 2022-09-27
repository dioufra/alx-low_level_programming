#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string to search
 * @accept: target matches
 *
 * Return: number of bytes consecutively matched.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int match = 0;

	while (s[i] != '\0')
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				match++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (match);
		}
		i++;
	}
	return (match);
}
