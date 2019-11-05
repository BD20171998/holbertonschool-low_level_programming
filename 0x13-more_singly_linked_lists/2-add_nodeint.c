#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the end of a listint_t list
 * @head: Const double pointer of structure listint_t for beginning
 * @n: Const int for data to be added
 * Return: List with new node for listint_t list, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new;

	new  = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->next = *head;
	*head = new;
	new->n = n;

	return (new);

}
