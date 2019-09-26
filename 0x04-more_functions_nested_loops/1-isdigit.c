#include "holberton.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: integer 1
 * Return: 1 if character is a digit, 0 if otherwise
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);

}
