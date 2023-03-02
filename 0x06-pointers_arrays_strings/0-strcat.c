#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * Description: This function appends the src string to the dest string
 * 		overwritting the terminating null byte (\0) at the end of dest, 
 * 		and the add a terminating null byte
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 1, j = 0;

	while (*dest++)
		i++;
	while (*src++)
	{
		*(dest + i++) = *src;
	}
	return dest;
}
