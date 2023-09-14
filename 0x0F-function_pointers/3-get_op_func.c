#include "3-calc.h"
#include <stdio.h>

/**
  *get_op_func - selects corrects function to perform operation by user
  *@s: the operator passed as argument
  *Return: a pointer to the corresponding to the operator given as parameter
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
