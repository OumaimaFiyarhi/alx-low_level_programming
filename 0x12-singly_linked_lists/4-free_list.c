#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list - frees a list_t linked list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head; /*save the current node*/
		 head = head->next; /* Move to the next node */
		free(tmp->str); /* Free the node's string */
		free(tmp); /* Free the node itself */
	}
}
