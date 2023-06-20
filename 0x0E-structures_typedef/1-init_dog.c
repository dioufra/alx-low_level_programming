#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: structure of type dog
 * @name: pointer to a char
 * @age: variable age
 * @owner: pointer to a character
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
