#include "holberton.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int d, i, j, k;

	for (i = 0; i < 10; i++)
	{


				_putchar('0');


		for (j = 1; j < 10; j++)
		{

			k = j * i;
			d = k / 10;

			if ((d > 0) && (k > 0))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(k % 10 + '0');
			}

			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}

		}

			_putchar('\n');

	}
}
