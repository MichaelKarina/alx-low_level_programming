#include "main.h"
/**
 *
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string that should be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
