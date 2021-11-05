#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - function that select the operation indicated
 * @s: pointer to the operator
 * Return: pointer to the function selected or Null if fail
 */


int (*get_op_func(char *s))(int, int)
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

	while (i < 6)
	{
		if (strcmp(s, ops[i].op) == 0)
			break;

		i++;
	}
	return (ops[i].f);
}
