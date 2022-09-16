#include "main.h"

/**
 * _isupper - function that checks for uooer case characters
 * @c: character to check
 * Return: 1 is c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
