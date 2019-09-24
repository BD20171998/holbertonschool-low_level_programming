#include "holberton.h"

/**
 * _isalpha - Checks for whether a character is lower case or not
 * @c: The character to check
 *
 * Return: 1 if character is either upper or lower case, 0 otherwise
 */

int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);

	else
		return (0);
}
