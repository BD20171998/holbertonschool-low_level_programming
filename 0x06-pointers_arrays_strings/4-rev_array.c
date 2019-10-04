#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: integer pointer
 * @n: integer for number of elements of an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int half, i, t;

	half = n / 2;

	for (i = 0 ; i < half; ++i)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
