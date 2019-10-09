#include "holberton.h"

/**
 * _pow_recursion - function that returns the value of x raised to the
 * power of y
 * @x: int for base
 * @y: int for exponent
 * Return: int for final result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
