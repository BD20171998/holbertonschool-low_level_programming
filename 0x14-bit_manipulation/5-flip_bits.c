#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: Unsigned long int for binary passed
 * @m: Unsigned long int for second binary passed
 * Return: Number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int y;

	unsigned int count = 0;

	y = n ^ m;

	for (y = n ^ m; y; y >>= 1)
		count += y & 1;

	return (count);
}
