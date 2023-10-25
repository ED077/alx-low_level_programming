#include "lists.h"

/**
* sum_listint - Returns sum of all the data of linked list
* @head: Head of list
* Return: Sum of all data
*/
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
