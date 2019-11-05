#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: Pointer of structure listint_t for beginning
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
