#include "holberton.h"

/**
 * _strchr - function that locates a character in a string
 * @s: char pointer for string to be checked
 * @c: char to search
 * Return: Char pointer to occurrence of the char c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{

		if (*(s + i) == c)
		{
			++s;
			break;
		}

		++s;
	}

	return (s);
}
