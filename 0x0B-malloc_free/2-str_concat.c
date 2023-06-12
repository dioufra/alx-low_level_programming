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

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	len = i + j;
	concat = malloc(sizeof(char) * (len + 1));

	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];

	for (j = 0; s2[j]; j++)
		concat[i++] = s2[j];

	concat[len] = '\0';
	return (concat);
}
