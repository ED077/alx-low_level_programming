#include "lists.h"

/**
* listint_len - Returns number of elements in list
* @h: Head of  list
* Return: Number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
