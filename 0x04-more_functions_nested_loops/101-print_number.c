#include "holberton.h"

/**
 * print_number - function that prints an integer
 * @n: integer to be displayed
 * Return: void
 */

void print_number(int n)
{
	int base = 1, d, length = 0, j, r;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	while (r != n)
	{
		base *= 10;
		r = n % base;
		++length;
	}

	base = base / 10;
	_putchar('0' + (n / base));

	if (length > 1)
	{
		for (j = 0; j < length - 2; j++)
		{
			base /= 10;
			d = n / base;
			_putchar('0' + d % 10);
		}

		_putchar('0' + (n % 10));
	}
}
