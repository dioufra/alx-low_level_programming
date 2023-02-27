#include "main.h"

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
