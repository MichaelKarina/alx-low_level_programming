#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add
 * @a: num1
 * @b: num2
 *
 * Return: success
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - ...add
 * @a: ...1
 * @b: ...1
 *
 * Return: ...
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - ..mul
 * @a: ...1
 * @b: ...2
 *
 *  Return: ...
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - ...dic
 * @a: ...1
 * @b: ...2
 *
 *  Return: ...
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - ...
 * @a: ...
 * @b: ...
 *
 * Return: ...
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
