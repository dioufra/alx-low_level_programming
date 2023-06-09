#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: input character
 *
 * Return: 1 if character is uppercase or lowercase, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
