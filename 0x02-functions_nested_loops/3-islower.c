#include "holberton.h"

/**
 * _islower - Checks for whether a character is lower case or not
 * @c: The character to check
 *
 * Return: 1 if character is lower case, 0 otherwise
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);

	else
		return (0);
}
