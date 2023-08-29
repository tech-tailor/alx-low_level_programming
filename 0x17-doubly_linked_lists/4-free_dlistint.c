#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: linked list head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
