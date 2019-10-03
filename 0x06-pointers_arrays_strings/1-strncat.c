#include "holberton.h"

/**
 * _strncat - function that concatenates two strings up to n bytes
 * to the buffer pointed to by dest
 * @dest: char pointer to be extended
 * @src: char pointer to be copied
 * @n: bytes to be appended from copied string
 * Return: char pointer to be returned
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, length = 0, length2 = 0;

	while (*(src + i) != '\0')
	{
		++length;
		++i;
	}

	i = 0;

	while (*(dest + i) != '\0')
	{
		dest[i] = *(dest + i);
		++length2;
		++i;
	}

	for (i = 0; i < n; ++i)
		dest[length2 + i] = src[i];

	dest[length2 + n] = '\0';

	return (dest);

}
