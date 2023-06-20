#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - struct
 * @name: attribute
 * @age: attribute
 * @owner: attribute
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
