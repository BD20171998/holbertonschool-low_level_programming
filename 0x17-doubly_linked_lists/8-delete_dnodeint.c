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
 * del_middle - function that deletes a middle node temp for a linked
 * dlistint_t list
 * @index: Index
 * @head: Pointer for linked dlistint_t list
 * Return: Void
 */

void del_middle(dlistint_t *head, unsigned int index)
{
	dlistint_t *prev, *temp, *next;
	unsigned int i = 0;

	temp = head;
	while (temp->next != NULL)
	{
		if (i == index)
		{
			prev = temp->prev;
			next = temp->next;
			prev->next = next;
			next->prev = prev;
			free(temp);
			return;
		}
		if (temp->next == NULL)
		{
			prev = temp->prev;
			prev->next = NULL;
			free(temp);
			return;
		}
		++i;
		temp = temp->next;
	}
}


/**
 * delete_dnodeint_at_index - function that deletes the node at "index" for
 * a dlistint_t list
 * @index: Index
 * @head: Double pointer for linked dlistint_t list
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int len;

	if (*head == NULL || head == NULL)
		return (-1);

	len = length(*head);

	if (len == 1 && (*head)->next == NULL)
	{
		temp = *head;
		*head = NULL;
		free(temp);
		return (1);
	}
	else if (index == 0 && len > 1)
	{
		temp = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	else if (index > 0 && len > 1)
	{
		del_middle(*head, index);
		return (1);
	}

	return (-1);
}
