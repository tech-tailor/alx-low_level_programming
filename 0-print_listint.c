#include "lists.h"


/**
 * print_listint - print all elements of listint_t
 *
 *@h: linked list head
 *
 *Return: number of elements
 *
 */


size_t print_listint(const listint_t *h)
{	

	const listint_t *tmp; 
	size_t size;
	size = 0;
	tmp = h;

	while(tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		size++;
	}
		return (size);
}
