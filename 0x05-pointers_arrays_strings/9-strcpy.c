#include "holberton.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: char pointer copy
 * @src: char pointer to be copied
 * Return: char pointer to be returned
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, length = 0;

	while (*(src + i) != '\0')
	{
		++i;
		++length;
	}

	i = 0;

	while (i < length)
	{
		dest[i] = src[i];
		++i;
	}

	dest[length] = '\0';

	return (dest);

}
