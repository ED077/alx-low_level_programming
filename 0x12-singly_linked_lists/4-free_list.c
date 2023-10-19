#include "lists.h"

/**
* free_list - Frees list
* @head: Head of the list
* Return: Address
*/

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
