#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a
 * dlistint_t linked list
 * @head: Const pointer to head node for linked dlistint_t list
 * Return: Sum of linked list data, 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
