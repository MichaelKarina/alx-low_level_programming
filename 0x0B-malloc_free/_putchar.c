#include <unistd.h>
/**
 * _putchar - write a char c to stdout
 * @c: The char to be printinted
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
