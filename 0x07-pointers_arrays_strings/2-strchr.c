#include "main.h"
/**
 * _strchr - Locates a character in a string
 *
 * @s: string to be searched
 * @c: character to search
 *
 * Return: a pointer to the first occurence of the character c or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
