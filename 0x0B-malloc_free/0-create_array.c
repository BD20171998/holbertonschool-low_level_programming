#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: Unsigned int for size of array
 * @c: - Char to initialize the array with
 * Return: Char pointer to array, NULL if size is 0 or if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(size * sizeof(char));

	if (a == '\0' || size == 0)
		return ('\0');

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);

	free(a);
}
