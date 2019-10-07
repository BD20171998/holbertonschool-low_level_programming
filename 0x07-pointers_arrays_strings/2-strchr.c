#include "holberton.h"

/**
 * __strchr - function that locates a character in a string
 * @s: char pointer for string to be checked
 * @c: char to search
 * Return: Char pointer to occurrence of the char c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != c; i++)
		++s;

	if (s[i] == '\0')
		return ('\0');

	else
		return (s);
}
