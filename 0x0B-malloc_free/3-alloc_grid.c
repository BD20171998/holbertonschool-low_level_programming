#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of
 * integers
 * @width: int for width of 2D array to be passed
 * @height: int for height of 2D array to be passed
 * Return: Char pointer of 2D array of integer, NULL on failure or if height or
 * width are not positive integers
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;

	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(height * sizeof(int *));

	if (a == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		a[k] = malloc(width * sizeof(int));

		if (a[k] == NULL)
		{
			for (j = 0; j <= k; j++)
				free(a[j]);

			free(a);
			return (NULL);
		}
	}


	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}

	return (a);
}
