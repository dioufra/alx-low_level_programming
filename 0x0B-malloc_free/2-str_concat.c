#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to the concatenated string, or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	len = i + j;
	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];

	for (j = 0; s2[j]; j++)
		concat[i++] = s2[j];

	concat[len] = '\0';
	return (concat);
}
