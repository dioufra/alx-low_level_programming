#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - functions that prints a name
 *
 * @name: name of the person
 * @f: pointer to a function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
