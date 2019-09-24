#include "holberton.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: The integer to check
 *
 * Return: 1 if integer is greater than 0, 0 if integer is 0, and -1 if less
 * than 0
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
