#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - function that returns the sum of all the data of a list
 * @head: head of the list
 * Return: returns the sum of all the data (n) of a list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
