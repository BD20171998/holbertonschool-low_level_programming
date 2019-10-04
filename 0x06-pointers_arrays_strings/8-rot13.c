#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13
 * @c: char pointer to covert to Rot13
 * Return: char pointer with converted string to Rot13
 */

char *rot13(char *c)
{
	int i = 0;

	while (*(c + i) != '\0')
	{
		if ((*(c + i) >= 'a' && *(c + i) <= 'm') ||
		    (*(c + i) >= 'A' && *(c + i) <= 'M'))
		{
			*(c + i) += 13;
			++i;
		}

		else if ((*(c + i) >= 'n' && *(c + i) <= 'z')
			 || (*(c + i) >= 'N' && *(c + i) <= 'Z'))
		{
			*(c + i) -= 13;
			++i;
		}
else
			++i;
	}
	return (c);
}
