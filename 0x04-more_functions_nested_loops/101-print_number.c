#include "holberton.h"
/**
 * print_number - function that prints an integer
 * @n: integer to be displayed
 * Return: void
 */
void print_number(int n)
{
	int length = 0, j;
	unsigned int base = 1, d, max;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	max = n;
	d = max;

	do {
		d /= 10;
		++length;
	} while (d != 0);

	for (j = 0; j < length -  1; j++)
		base = base * 10;
	_putchar('0' + (max / base));

	if (length > 1)
	{
		for (j = 0; j < length - 2; j++)
		{
			base /= 10;
			d = max / base;
			_putchar('0' + d % 10);
		}
		_putchar('0' + (max % 10));
	}
}
