#include "holberton.h"

/**
 * _puts_recursion - function that prints a string
 * @s: char pointer for string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion((s + 1));
	}

	if (*(s + 1) == '\0')
		_putchar('\n');
}
