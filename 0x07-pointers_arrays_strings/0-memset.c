#include "holberton.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: char pointer that points to a memory area
 * @b: char representing a constant byte
 * @n: unsigned int to specify number of bytes of memory to be pointed to
 * Return: char pointer pointing to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return (s);
}
