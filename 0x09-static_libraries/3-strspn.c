#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 *
 * @s: string to search in
 * @accept: prefix substring
 *
 * Return: the number of bytes form s consisting of bytes from acceps
 */
int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (*s)
	{
		for (index = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (count)
		}
		s++;
	}
	return (count);
}
