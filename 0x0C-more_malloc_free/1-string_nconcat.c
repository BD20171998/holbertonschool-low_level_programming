#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: char pointer for string
 * Return: int for length of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);

	return (0);
}

/**
 * string_nconcat - function that concatenates two strings with malloc'd memory
 * @s1: Char pointer for string 1
 * @s2: Char pointer for string 2
 * @n: Unsigned int for memory size to be allocated
 * Return: Char pointer of concatenated string pointed to a newly allocated
 * space in memory, return NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, j, l1, l2, size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	l1 = _strlen_recursion(s1);
	l2 = _strlen_recursion(s2);

	if (n >= l2)
		size = l1 + l2 + 1;

	if (n < l2)
		size = l1 + n + 1;

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		a[i] = s1[i];

	if (n >= l2)
		for (j = 0; s2[j] != '\0'; j++)
			a[i + j] = s2[j];

	if (n < l2)
		for (j = 0; j < n; j++)
			a[i + j] = s2[j];

	a[i + j] = '\0';
	return (a);
}
