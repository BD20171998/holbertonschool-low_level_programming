#include "lists.h"

/**
 * del_middle - Function that deletes a node outside of the head node
 * @h: Pointer for linked dlistint_t list to head node
 * @ind: Index
 * Return: 1 if successed, -1 if failed
 */

int del_middle(dlistint_t *h, unsigned int ind)
{
	unsigned int i;
	dlistint_t *prev, *temp, *next;

	for (i = 0, prev = h; prev != NULL; i++, prev = prev->next)
	{
		if (ind == i)
		{
			temp = prev;
			next = temp->next;
			prev->prev->next = next;
			if (next != NULL)
				next->prev = prev->prev;
			free(temp);
			return (1);
		}
	}
	return (-1);
}

/**
 * delete_dnodeint_at_index - function that deletes the node at "index" for
 * a dlistint_t list
 * @index: Index
 * @head: Double pointer for linked dlistint_t list
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	int j;

	if (head == NULL || *head == NULL)
		return (-1);

	for (j = 0, temp = *head; temp != NULL; temp = temp->next, ++j)
		;

	if (index == 0 && (*head)->next == NULL)
	{
		temp = *head;
		free(temp);
		*head = NULL;
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

	else if (index > 0 && index <= (unsigned int) j)
	{
		j = del_middle(*head, index);
		return (j);
	}

	return (-1);
}
