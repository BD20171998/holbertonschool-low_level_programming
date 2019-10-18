#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: unsigned int for number of rows of memory
 * @size: unsigned int for size of blocks
 * Return: pointer to the array of allocated memory, NULL if function fails or
 * if nmemb or size are 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*((unsigned char *) a + i) = 0;

	return (a);
}
