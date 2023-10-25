#include "lists.h"

/**
 * print_listint - Prints all elements in the list
 * @h: Head of list
 * Return: Numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
