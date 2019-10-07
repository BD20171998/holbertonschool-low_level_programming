#include "holberton.h"

/**
 * _memcpy - function that copies memory area
 * @dest: char pointer that points to a memory area
 * @src: char pointer of memory area to be copied
 * @n: unsigned int to specify number of bytes of memory to copied
 * Return: char pointer for dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

	}

	return (dest);
}
