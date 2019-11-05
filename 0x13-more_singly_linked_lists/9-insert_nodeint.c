#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at a given
 * position
 * @head: Double pointer of linked list listint_t
 * @idx: Unsigned int index of the list where the new node should be added.
 * Index starts at 0
 * @n: Int fornumber to be added in new node
 * Return: Address of the new node, NULL if adding new node at idx is not
 * possible or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int i = 0;
	listint_t *new;
	listint_t *temp;

	new  = malloc(sizeof(listint_t *));

	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		(*head)->n = n;
		return (*head);
	}

	temp = *head;

	while (temp != NULL)
	{
		if ((idx - 1) == i)
		{
			new->n = n;
			new->next = temp->next;
			temp->next = new;
			return (new);
		}

		temp = temp->next;
		i++;
	}

	free(new);
	return (NULL);
}
