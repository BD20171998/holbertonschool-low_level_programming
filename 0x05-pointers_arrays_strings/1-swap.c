#include "holberton.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a:integer pointer 1
 * @b:integer pointer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
