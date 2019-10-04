#include "holberton.h"

/**
 * string_toupper - function that changes all lowercase letters of a string
 * to uppercase
 * @c: char pointer to convert
 * Return: char pointer that will return string as upper case
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (*(c + i) != '\0')
	{
		if ((*(c + i) >= 97) && (*(c + i) <= 122))
			*(c + i) -= 32;

		++i;
	}

	return (c);
}
