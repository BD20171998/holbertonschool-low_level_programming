#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index index of a
 * listint_t linked list
 * @head: Double pointer of linked list listint_t
 * @index: Unsigned int index of the list where the new node should be deleted.
 * Index starts at 0
 * Return: 1 if success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1;
	listint_t *temp2;
	listint_t *prev;

	unsigned int i = 0;

	prev = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0 && (*head)->next != NULL)
	{
		prev = *head;
		*head = prev->next;
		free(prev);
		return (1);
	}

	if (index == 0 && (*head)->next == NULL)
	{
		temp1 = *head;
		*head = (*head)->next;
		free(temp1);
		return (1);
	}

	for (i = 0, prev = *head; prev != NULL; i++, prev = prev->next)
	{
		if ((index - 1) == i)
		{
			temp1 = prev->next;
			temp2 = temp1->next;
			prev->next = temp2;
			free(temp1);
			return (1);
		}
	}
	return (-1);
}
