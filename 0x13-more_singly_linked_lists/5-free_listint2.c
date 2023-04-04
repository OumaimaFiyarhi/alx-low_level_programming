#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: head of the list.
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *tem;
	if (head == NULL || *head == NULL)
	{
		return;
	}

	current = *head;
	while (current != NULL)
	{
		tem = current->next;
		free(current);
		current = tem;
	}
	*head = NULL;
}
