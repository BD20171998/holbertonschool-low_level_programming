#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: char pointer for initial string
 * @accept: char pointer for substring to be checked
 * Return: number of bytes in segment "s" which consist only of bytes
 * from accept
 */

unsigned int _strspn(char *s, char *accept)
{

	int b = 0, e = 0, i = 0, j;


	for (i = 0; *(accept + i) !=  '\0'; ++i)
	{
		j = 0;

		while (*s != '\0')
		{

			if (*(s + j) == *(accept + i) && e < j)
				e = j + 1;

			if (*(s + j) == *(accept + i) && j < b)
				b = j;

			++s;
			++j;
		}

		++i;
	}

	return (e - b);
}
