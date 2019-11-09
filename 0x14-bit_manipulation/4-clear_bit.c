#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: Unsigned long int pointer for binary passed
 * @index: Unsigned int for index to be cleared
 * Return: 1 if success, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((*n >> index & 1) == 1)
	{
		*n = *n - (mask << index);
		return (1);
	}

	else
		return (1);

}
