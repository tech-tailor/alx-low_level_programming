#include "lists.h"

/**
 **add_nodeint - add new node at the begining
 *
 *@**head: first node of the list
 *@n: nodes data
 *
 * Return: return 0
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (0);
}
