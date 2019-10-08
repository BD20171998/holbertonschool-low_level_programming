#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: int pointer for matrix to pass
 * @size: int for size of square matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{

	int i, j, s1 = 0, s2 = 0;

	for (i = 0; i < (size * size); i += (size + 1))
		s1 += a[i];

	for (j = (size - 1); j <= ((size * size) - size); j += (size - 1))
		s2 += a[j];

	printf("%d, %d\n", s1, s2);

}
