#include "main.h"

/**
 * _isdigit - checks for a digit (0-9)
 * @c: character to check
 *
 * Return: 1 if c is digit,
 * Otherwise, return 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
