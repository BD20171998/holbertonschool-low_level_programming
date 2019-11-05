#include "lists.h"

/**
 * print_listint - function that prints the number of elements in a
 * linked listint_t list
 * @h: Const pointer of linked listint_t list
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
