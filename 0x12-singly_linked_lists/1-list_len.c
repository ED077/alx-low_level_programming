#include "lists.h"
/**
* list_len - Return the number of elements found in a list
* @h: Singly linked list
* Return: Number of elements in the list
*/

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
