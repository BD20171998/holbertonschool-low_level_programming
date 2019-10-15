#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: char pointer for initial string to be checked
 * @accept: char pointer for substring
 * Return: number of bytes in segment "s" which consist only of bytes
 * from accept
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int i, j;

	int count = 0;


	for (i = 0; *(s + i) != '\0'; i++)
	{

		for (j = 0; *(accept + j) != '\0'; j++)
		{

			if (*(s + i) == *(accept + j))
			{
				++count;
				break;
			}

		}

		if (*(accept + j) == '\0')
			break;
	}

	return (count);
}
