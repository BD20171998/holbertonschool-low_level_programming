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

	a = malloc(2 * sizeof(char *) + 1);

	if (a == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (s1 == NULL && s2 != NULL)
		return (s2);

	if (s1 != NULL && s2 == NULL)
		return (s1);

	for (i = 0; s1[i] != '\0'; i++)
		a[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		a[i + j] = s2[j];

	a[i + j] = '\0';

	return (a);
}
