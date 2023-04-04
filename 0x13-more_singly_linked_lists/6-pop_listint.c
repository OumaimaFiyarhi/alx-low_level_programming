#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: head of the list.
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tem;

	if (*head == NULL)
	{
		return (0);
	}
	data = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;
	return (data);
}
