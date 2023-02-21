#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: character to check
 *
 * Return: 1 if character if lowercase
 * Otherwise, return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
