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
	int i;

	for (i = 0; i < n && src[i] != '\0'; ++i)
		dest[i] = src[i];

	for (; i < n; ++i)
		dest[i] = '\0';

	return (dest);

}
