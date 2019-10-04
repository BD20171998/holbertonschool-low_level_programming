#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @c: char pointer to be possibly converted
 * Return: char pointer with converted string
 */

char *cap_string(char *c)
{
	int i = 0, j;

	char sep[14] = {9, 11, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123,
			125};

	while (*(c + i) != '\0')
	{
		for (j = 0; j < 14; ++j)
		{
			if (*(c + i) == sep[j] &&  (*(c + i + 1) >= 97 &&
						     *(c + i + 1) <= 122))
			{
				*(c + i + 1) -= 32;
				break;
			}
		}

		++i;
	}
	return (c);
}
