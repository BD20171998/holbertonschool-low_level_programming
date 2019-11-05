#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n)
 * @head: Const double pointer of structure listint_t for beginning
 * Return: Int for data from head node to be deleted
 */

int pop_listint(listint_t **head)
{
	int n;

	listint_t *temp;

	if (*head == NULL || head == NULL || **head == "")
		return (0);

	n = (*head)->n;

	temp = (*head)->next;
	(*head)->n = temp->n;
	(*head)->next = temp->next;

	free(temp);

	return (n);
}
