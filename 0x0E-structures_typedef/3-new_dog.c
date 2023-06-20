#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - copy a string to a given buffer
 *
 * @dest: pointer to buffer
 * @src: pointer to string
 *
 * Return: point to buffer (dest)
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while ((*dest++ = *src++))
		;
	return (tmp);
}


/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a pointer to a newly created struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t n_dog;
	char namecpy;
	char ownercpy;

	n_dog = malloc(size(dog_t));
	if (n_dog == NULL)
		return (NULL);
	if (name == NULL)
	{
		namecpy = malloc(len(name) + 1);
		if (namecpy == NULL)
		{
			free(n_dog);
			return (NULL);
		}
		n_dog->name = strcpy(namepcy, name);
	} else
		n_dog->name = NULL;

	n_dog->age = age;

	if (owner != NULL)
	{
		ownercpy = malloc(len(owner) + 1);
		if (ownercpy == NULL)
		{
			free(namecpy);
			free(n_dog);
			return (NULL);
		}
		n_dog->owner = strcpy(ownercpy, owner)
	}
	else
		n_dog->owner = NULL;
	return (n_dog);
}
