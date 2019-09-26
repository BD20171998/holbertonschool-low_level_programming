#include "holberton.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: integer 1
 * Return: 1 if character is upper case, 0 if otherwise
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);

}
