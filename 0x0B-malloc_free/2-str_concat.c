#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: Char pointer for string 1
 * @s2: Char pointer for string 2
 * Return: Char pointer of concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j;

	a = malloc(2 * sizeof(char));

	if (a == '\0')
		return (NULL);

	if (*s1 == '\0' || *s2 == '\0')
		return ('\0');

	for (i = 0; s1[i] != '\0'; i++)
		a[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		a[i + j] = s2[j];

	a[i + j] = '\0';

	return (a);

	free(a);
}
