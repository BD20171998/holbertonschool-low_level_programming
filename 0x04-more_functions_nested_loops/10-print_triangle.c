#include "holberton.h"

/**
 * print_triangle - function that prints a triangle
 * @n: integer that specifies triangle size
 * Return: void
 */

void print_triangle(int n)
{
	int i, j, k;

	if (n > 0)
	{

		for (i = 0; i < n; i++)
		{

			j = n - 1 - i;

			k = 0;

			while (j > 0)
			{
				_putchar(' ');
				--j;
			}

			while (k < i + 1)
			{
				_putchar('#');
				++k;
			}
			_putchar('\n');
		}

	}

	else
		_putchar('\n');
}
