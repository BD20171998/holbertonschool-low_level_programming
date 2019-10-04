#include "holberton.h"

/**
 * leet - function that encodes a string into 1337
 * @c: char pointer to be  converted
 * Return: char pointer with converted string
 */

char *leet(char *c)
{
	int i = 0, j;

	char a[5][3] = {{'a', 'A', '4'},
			{'e', 'E', '3'},
			{'o', 'O', '0'},
			{'t', 'T', '7'},
			{'l', 'L', '1'}};

	while (*(c + i) != '\0')
	{
		for (j = 0; j < 5; ++j)
		{
			if (*(c + i) == a[j][0] || *(c + i) == a[j][1])
			{
				*(c + i) = a[j][2];
				break;
			}
		}

		++i;
	}
	return (c);
}
