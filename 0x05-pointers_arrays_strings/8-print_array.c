#include <stdio.h>
#include "holberton.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: integer pointer
 * @n: integer for n elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			break;

		printf(", ");
	}

	printf("\n");

}
