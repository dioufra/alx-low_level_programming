#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - get the function corresponding to a given operator
 *
 * @s: operator
 *
 * Return: a pointer to a function returning an integer
 */

int (*get_op_func(char *s))(int int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].operator != NULL)
	{
		if *ops[i].operator == *s
			return (*ops[i].f);
	}
	return (NULL);
}
