#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: Unsigned long int pointer for binary passed
 * @index: Unsigned int for index to be set
 * Return: 1 if success, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((*n >> index & 1) == 0)
	{
		*n = *n + (mask << index);
		return (1);
	}

	else
		return (1);

}
