#include "main.h"
#define NULL 0

/**
 * _strchr - function that locate a character in a string
 * @s: string
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of @c in @s,
 * or a NULL if the string is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
