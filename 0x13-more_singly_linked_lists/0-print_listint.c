#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: list of type listint_t.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
