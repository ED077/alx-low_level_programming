#include "lists.h"

/**
* free_listint - Frees linked list
* @head: Head of list
* Return: No return
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
