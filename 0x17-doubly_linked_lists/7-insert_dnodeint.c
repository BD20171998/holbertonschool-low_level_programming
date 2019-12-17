#include "lists.h"

/**
 * length - function that gets number of nodes of for a linked dlistint_t list
 * @h: Pointer for linked dlistint_t list
 * Return: Unsigned int for length
 */

unsigned int length(dlistint_t *h)
{
	dlistint_t *tem;
	unsigned int l = 0;

	tem = h;

	while (tem != NULL)
	{
		++l;
		tem = tem->next;
	}

	return (l);
}

/**
 * middle_node - Function that adds a new node between 2 nodes of a linked
 * dlistint_t list
 * @h: Pointer for linked dlistint_t list for head
 * @nw: Pointer for newly malloc'd node
 * @n: Int to be added for new node
 * @idx: Index of the list where the new node should be added.Index starts at 0
 * Return: Pointer to newly created node
 */

dlistint_t *middle_node(dlistint_t *h, dlistint_t *nw, int n, unsigned int idx)
{
	dlistint_t *prev;
	dlistint_t *t;
	unsigned int i = 0;

	t = h;

	while (t != NULL)
	{
		if (i == idx)
		{
			nw->n = n;
			nw->prev = t->prev;
			nw->next = t;
			prev = t->prev;
			prev->next = nw;
			t->prev = nw;
			return (nw);
		}

		++i;
		t = t->next;
	}

	return (NULL);
}

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 * position
 * @h: Double pointer for linked dlistint_t list
 * @idx: Unsigned int index of the list where the new node should be added.
 * Index starts at 0
 * @n: Int to be added for new node
 * Return: The address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	unsigned int len;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL || h == NULL)
		return (NULL);

	len = length(*h);

	if (idx == 0)
	{
		free(new);
		new = add_dnodeint(h, n);
		return (new);
	}

	else if (idx > 0 && idx < len)
	{
		new = middle_node(*h, new, n, idx);
		return (new);
	}

	else if (idx == len)
	{
		free(new);
		new = add_dnodeint_end(h, n);
		return (new);
	}
	free(new);
	return (NULL);
}
