#include "lists.h"


/**
* listint_len - return number of elements
*
* @h: linked list head
*
* Return: number of elements
*/


size_t listint_len(const listint_t *h)
{

const listint_t *tmp;
size_t size;
size = 0;
tmp = h;

while (tmp != NULL)
{
tmp = tmp->next;
size++;
}
return (size);
}
