#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a
 * linked listint_t list
 * @h: Const pointer of linked listint_t list
 * Return: Number of elements in passed linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
