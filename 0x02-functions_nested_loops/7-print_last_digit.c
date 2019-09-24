#include "holberton.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: Integer to be checked
 * Return: Last digit of number to be checked
 */

int print_last_digit(int n)
{
	int r;

	r = n % 10;

	if (r < 0)
		r = -r;

	_putchar('0' + r);
	return (r);

}
