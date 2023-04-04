#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: head of the list.
 * @index: the index of the node, starting at 0
 * Return: returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;

	while (head != NULL && num < index)
	{
		head = head->next;
		num++;
	}
	if (head == NULL)
	{
		return (NULL);
	}
	return (head);
}
