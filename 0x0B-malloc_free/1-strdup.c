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

	int i;

	dup = malloc(sizeof(char *));

	if (dup == '\0' || str == '\0')
		return ('\0');

	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];

	dup[i] = '\0';

	return (dup);

	free(dup);
}
