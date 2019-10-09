#include "holberton.h"

/**
 * _strstr -  function that locates a substring
 * @haystack: char pointer for string to be checked
 * @needle: char pointer for string to search
 * Return: char pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *begin;

	char *substring;

	while (*haystack)
	{
		begin = haystack;
		substring = needle;

		while (*haystack && *substring && *haystack == *substring)
		{
			++haystack;
			++substring;
		}

		if (!*substring)
			return (begin);

		haystack = begin + 1;
	}

	return ('\0');

}
