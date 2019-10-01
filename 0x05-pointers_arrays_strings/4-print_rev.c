#include "holberton.h"

/**
 * print_rev - function that prints a string, in reverse followed by a new line
 * @s:char pointer
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
