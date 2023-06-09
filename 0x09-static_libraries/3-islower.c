#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * @c: imput character
 *
 * Return: 1 if character is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
