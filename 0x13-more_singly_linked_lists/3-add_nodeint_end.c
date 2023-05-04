#include "lists.h"
/**
 * add_nodeint_end- add new node at the end
 *
 *@head: the head of the list
 *
 *@n: the list data
 *
 *Return: return new node
 */



listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = NULL;

	if (newNode == NULL)
	{
		printf("Error\n");
		return(NULL);
	}
	else
	{	
	if (*head == NULL)
		*head = newNode;

	else
	{
		listint_t *lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	}
	return (newNode);

}
