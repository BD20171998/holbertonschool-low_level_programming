#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: Const double pointer of structure list_t for beginning
 * @str: Const char pointer for data to be added
 * Return: List with new node for list_t list, NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	unsigned int i;
	list_t *new;
	list_t *temp;

	new  = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	if (*head == NULL)
	{
		*head = new;
		new->len = i;
		new->str = strdup(str);
		new->next = NULL;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	return (new);

}
