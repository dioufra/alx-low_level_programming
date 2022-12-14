#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - select the correct function to perform
 * asked operation
 *
 * @s: operator
 *
 * Return: pointer to the correct function or a NULL
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
