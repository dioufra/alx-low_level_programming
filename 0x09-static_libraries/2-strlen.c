#include "main.h"

/**
 * _strlen - returns the lenght of a string
 *
 * @s: pointer to the address of a string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
