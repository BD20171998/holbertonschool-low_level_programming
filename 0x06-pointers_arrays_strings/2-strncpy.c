#include "holberton.h"

/**
 * _strncpy - function that copies one string to another up to n bytes
 * @dest: char pointer to receive copy up to n bytes
 * @src: char pointer to be copied
 * @n: bytes to be copied
 * Return: char pointer to be returned
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, length = 0;

	while (*(src + i) != '\0')
	{
		++length;
		++i;
	}

	if (n > length)
	{
		for (i = 0; i < length; ++i)
			dest[i] = src[i];

		for (i = length; i < n; ++i)
			dest[i] = '\0';
	}

	else if (n <= length)
	{
		for (i = 0; i < n; ++i)
			dest[i] = src[i];

		dest[n] = '\0';
	}

	return (dest);

}
