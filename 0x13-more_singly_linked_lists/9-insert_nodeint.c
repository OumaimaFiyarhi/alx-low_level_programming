#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function that inserts a new node at idx
 * @head: head of the list
 * @idx: the index
 * @n: integer
 * Return: returns the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *prev_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

/* Handle the special case of inserting at the head of the list */

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
/* Traverse the list until we reach the desired index or the end of the list */
	prev_node = *head;
	while (prev_node != NULL && i < idx - 1)
	{
		prev_node = prev_node->next;
		i++;
	}
/* If we reached the end of the list before reaching idx, return NULL */

	if (prev_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
/* Insert the new node at the desired index */

	new_node->next = prev_node->next;
	prev_node->next = new_node;
	return (new_node);
}
