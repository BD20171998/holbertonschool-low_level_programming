#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t
 * linked list
 * @head: Const pointer to head node for linked dlistint_t list
 * @index: Unsigned index of the node, starting from 0
 * Return: the address of the nth node, or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		++i;
	}

	return (NULL);
}
