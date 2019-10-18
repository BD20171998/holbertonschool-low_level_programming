#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: int for minimum number
 * @max: int for maximum number
 * Return: pointer to the array, NULL if min < max or if function fails
 */

int *array_range(int min, int max)
{
	int *a;

	int diff, i;

	if (min > max)
		return (NULL);

	diff = max - min + 1;

	a = malloc(sizeof(int) * diff);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < diff; i++)
	{
		a[i] = min;
		min++;
	}

	return (a);
}
