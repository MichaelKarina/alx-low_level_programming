#include <stdio.h>
#include "main.h"

/**
 * main - will print the number of arguments passed to the program
 * @argc: no. of arguments
 * @argv: array of arguments
 * made by Michael Karina 
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
