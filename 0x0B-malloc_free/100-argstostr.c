#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to the address of the string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s++)
	{
		lenght++;
	}
	return (lenght);
}

/**
 * argstostr - concatenates all the arguments of a program
 *
 * @ac: number of arguments
 * @av: pointer to the array of argument
 *
 * Return: a pointer to the new string, or NUll on failure.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int len, i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);
	len += (ac + 1);

	str = malloc(sizeof(char) * len);

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
			str[k++] = av[i][j];

		str[k++] = '\n';
	}
	return (str);
}
