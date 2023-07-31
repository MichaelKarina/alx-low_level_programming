#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * made by Michael Karina
 * @n: number of bytes to be changed
 *  @b: the desired value
 *  Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		 n--;
	}
	return (s);
}
