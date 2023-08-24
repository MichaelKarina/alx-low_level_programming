#include <stdio.h>
#include "lists.h"

/**
 * print_list - print'sall the elements of a linked lis.
 * @h: pointersto the list_t list to print
 *
 * Return: the number of nodes prints.
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
