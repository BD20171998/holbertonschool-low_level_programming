#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at "index" for
 * a dlistint_t list
 * @index: Index
 * @head: Double pointer for linked dlistint_t list
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *temp, *next;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0 && (*head)->next == NULL)
	{
		temp = *head;
		*head = NULL;
		free(temp);
		return (1);
	}

	else if (index == 0 && (*head)->next != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0, prev = *head; prev != NULL; i++, prev = prev->next)
	{
		if ((index - 1) == i)
		{
			temp = prev->next;
			next = temp->next;
			prev->next = next;
			next->prev = prev;
			free(temp);
			return (1);
		}
	}
	return (-1);
}
