#include "lists.h"
/**
 * listint_len - function
 * @h: list of type listint_t.
 * Return: the number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
