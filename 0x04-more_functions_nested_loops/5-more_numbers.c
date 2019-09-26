#include "holberton.h"

/**
 * more_numbers - function that prints numbers 0-14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int i, j, r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			r = j / 10;

			if (r >= 1)
			{
				_putchar('1');
				_putchar('0' + j % 10);
			}

			else
				_putchar('0' + j);
		}

	_putchar('\n');
	}
}
