#include "lists.h"
/**
 * delete_dnodeint_at_index - the function that delete a node at index
 * @head: header pointer
 * @index: index number
 * Return: 1 on success else 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int n = 0;

	if (*head == NULL)
		return (0);

	tmp = *head;
	while (tmp)
	{
		if (n == index)
		{
			if (tmp == *head)
				*head = tmp->next;

			if (tmp->next)
				tmp->next->prev = tmp->prev;
			if (tmp->prev)
				tmp->prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		n++;
		tmp = tmp->next;
	}
	return (-1);
}
