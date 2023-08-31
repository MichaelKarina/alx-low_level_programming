#include "main.h"

/**
 * clear_bit - set'sthe value of a given bit to 0
 * @n: pointersto the number to change
 * @index: indexeof the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
