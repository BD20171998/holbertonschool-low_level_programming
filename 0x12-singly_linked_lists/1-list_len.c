#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t
 * list
 * @h: Const pointer of linked list_t list
 * Return: Number of nodes
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
