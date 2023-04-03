#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: head of a list of type listint_t.
 *@n: number
 * Return: he address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_node;

	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
	{
		return (NULL);
	}
	add_node->n = n;
	add_node->next = NULL;
	if (*head == NULL)
	{
		*head = add_node;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = add_node;
	}
	return (add_node);
}
