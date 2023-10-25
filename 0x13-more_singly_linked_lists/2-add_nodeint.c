#include "lists.h"

/**
* add_nodeint - Adds node at the beginning of list
* @head: Head of  list
* @n: Number of elements
* Return: New elememt address, return NUll if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
