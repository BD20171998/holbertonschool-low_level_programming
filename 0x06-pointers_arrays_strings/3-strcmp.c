#include "holberton.h"

/**
 * _strcmp - function that compares two strings
 * @s1: 1st char pointer to be compared
 * @s2: 2nd char pointer to be copied
 * Return: ASCII value of the first unmatched character for difference between
 * strings (s1 - s2)
 */

int _strcmp(char *s1, char *s2)
{
	int d;

	while (*s1 != '\0' && *s2 != '\0')
	{
		d = *s1 - *s2;

		if (d != 0)
			break;

		++s1;
		++s2;
	}

	return (d);
}
