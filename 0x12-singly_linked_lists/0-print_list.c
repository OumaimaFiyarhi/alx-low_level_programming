#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list -  a function that prints all the elements of a list_t list.
 * @h: list of type list_t.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		c++;
	}
	return (c);
}
