#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: head of the list
 * @index: is the index of the node that should be deleted and starts at 0
 * Return: returns 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *prev;

	if (index == 0)
	{
		if (*head != NULL)
		{
			current = *head;
			*head = (*head)->next;
			free(current);
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	prev = *head;
	for (i = 0; i < index - 1 && prev != NULL; i++)
	{
		prev = prev->next;
	}
	if (prev == NULL || prev->next == NULL)
	{
		return (-1);
	}
	current = prev->next;
	prev->next = current->next;
	free(current);
	return (1);
}

