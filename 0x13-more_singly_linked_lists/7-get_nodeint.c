#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * linked list
 * @head: Pointer of structure listint_t for beginning
 * @index: Int of index of the node, starting at 0
 * Return: Nth node of a listint_t linked list, NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *temp;
	listint_t *temp2;
	unsigned int i = 0, j = 0;

	if (head == NULL)
		return (NULL);

	temp2 = head;

	while (temp2 != NULL)
	{
		temp2 = temp2->next;
		j++;

	}

	if (index > j)
		return (NULL);

	while (i < index)
	{
		temp = head->next;

		if (temp == NULL)
			return (NULL);

		head = temp;
		i++;
	}
	return (head);
}
