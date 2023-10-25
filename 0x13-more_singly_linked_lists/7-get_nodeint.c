#include "lists.h"

/**
* get_nodeint_at_index - Returns nth node of linked list
* @head: Head of list
* @index: Index of node
* Return: Returns nth node, if node doesnt exist, returns NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
