#include "holberton.h"

/**
 * power - function that exponentiates a number to a given power
 * @base:unsigned int for base
 * @y: unsigned int for exponent
 * Return: Number that has been exponentiated
 */

int power(unsigned int base, unsigned int y)
{
	unsigned int i, p = 1;

	if (y == 0)
		return (1);

	for (i = 0; i < y; i++)
		p = p * base;

	return (p);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: Const char pointer for binary number to be converted
 * Return: Converted number as int, or 0 if one or more chars in the string b
 * that is not 0 or 1, or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, len = 0, n = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != 48 &&  b[i] != 49)
			return (0);
		i++;
		len++;
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] == '0')
			continue;

		n += power(2, len - 1 - i);
	}

	return (n);
}
