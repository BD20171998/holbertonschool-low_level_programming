#include "holberton.h"

/**
 * _strcat - function that concatenates two strings
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: char pointer to be extended
 * @src: char pointer to be copied
 * Return: char pointer to be returned
 */

char *_strcat(char *dest, char *src)
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
		dest[i]	= *(dest + i);
		++length2;
		++i;
	}

	for (i = 0; src[i] != '\0'; ++i)
		dest[length2 + i] = src[i];

	dest[length2 + length] = '\0';

	return (dest);

}
