#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Creates an array of chars, and initialize it with a specific
 * char
 *
 * @size: size of the array
 * @c: character to fill in
 *
 * Return: a pointer to the array, or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (array != NULL)
	{
		for (i = 0; i < size; i++)
			array[i] = c;
	}
	return (array);
}
