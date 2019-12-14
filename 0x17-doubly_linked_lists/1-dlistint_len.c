#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a
 * linked dlistint_t list
 * @h: Const pointer of linked dlistint_t list
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		++n;
		h = h->next;
	}

	return (n);
}
