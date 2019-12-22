#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: Double pointer of linked list listint_t
 * Return: Pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *future;

	prev = NULL;

	while (*head != NULL)
	{
		future = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = future;
	}
	*head = prev;
	return (*head);
}
