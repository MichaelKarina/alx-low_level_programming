#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - select's the correction function to perform
 *     the operation asked by user
 * @s: operator passed as argmt
 *
 * Return: A pointers to the function corresponding
 *    to the operator given as a parmtr
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
