#include "holberton.h"

/**
 * _strlen - function that returns the length of a string
 * @s:char pointer
 * Return: length of string variable
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		++i;

	return (i);
}
