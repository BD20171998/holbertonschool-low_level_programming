#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: - Char string to be copied
 * Return: Char pointer to the duplicated string. Return NULL if insufficient
 * memory was available to array or if array is NULL
 */

char *_strdup(char *str)
{
	char *dup;

	int i, l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		++l;

	if (l == 0)
		return (NULL);

	dup = malloc(sizeof(char *) * l + 1);

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];

	dup[i] = '\0';

	return (dup);

	free(dup);
}
