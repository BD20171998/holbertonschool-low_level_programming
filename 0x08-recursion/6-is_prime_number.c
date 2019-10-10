#include "holberton.h"

/**
 * check_num - helper function that determines whether a number is a
 * prime number or not
 * @n: int to check if a prime number
 * @d: int for divisor
 * Return: 1 if prime, 0 if not prime
 */
int check_num(int n, int d)
{
	int e, r;

	--d;

	e = n / d;
	r = n % d;

	if (r == 0 && d < n && e != n)
		return (0);

	else if (r == 0 && d == 1 && e == n)
		return (1);

	return (check_num(n, d));
}


/**
 * is_prime_number - function that returns 1 if the input integer is
 * a prime number, otherwise return 0.
 * @n: int to check if a prime number
 * Return: int for final result
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_num(n, n));
}
