#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len -  a function that returns all the elements of a list_t list.
 * @h: list of type list_t.
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
