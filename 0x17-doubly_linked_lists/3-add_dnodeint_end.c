#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a dlistint_t
 * list
 * @head: Const double pointer for linked dlistint_t list
 * @n: Const integer of node to be added
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	temp = *head;

	while (temp != NULL)
	{
		if (temp->next == NULL)
			break;
		temp = temp->next;
	}

	new->prev = temp;
	temp->next = new;

	return (new);
}
