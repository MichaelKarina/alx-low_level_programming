#include "main.h"

/**
 * _pow_recursion - shows the value of x that is raised to the power of y
 * @x: value raised
 * @y: power value 
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
