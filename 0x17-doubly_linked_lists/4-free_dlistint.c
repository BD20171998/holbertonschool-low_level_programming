#include "lists.h"

/**
 * free_dlistint - function that free a dlistint_t list
 * @head: Const pointer to head node for linked dlistint_t list
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;

	if (head == NULL)
		return;

	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

}
