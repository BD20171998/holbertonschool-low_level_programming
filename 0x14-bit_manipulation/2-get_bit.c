#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: Unsigned long int n for binary passed
 * @index: Unsigned int for index to be retreived
 * Return: The value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = (mask << index);

	if ((mask & n) == 0)
		return (0);

	else
		return (1);

}
