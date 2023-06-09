#include "main.h"

/**
 * _isupper - checks for uppercase characters
 *
 * @c: imput character
 *
 * Return: 1 if character is uppercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
