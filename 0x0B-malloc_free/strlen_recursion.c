#include "holberton.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: char pointer for string
 * Return: int for length of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);

	return (0);
}
