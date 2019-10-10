#include "holberton.h"

/**
 * check_sq - helper function that determines whether a number is a
 * natural square root
 * @n: int to check if there is a natural square root
 * @d: int divisor
 * Return: int d if divisior is natual square number or -1 if not
 */

int check_sq(int n, int d)
{
	int e, r;

	--d;

	e = n / d;
	r = n % d;

	if  (e == d && r == 0)
		return (d);

	if  (e == n)
		return (-1);

	return (check_sq(n, d));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: int to check if there is a natural square root
 * Return: int for final result
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (check_sq(n, n));
}
