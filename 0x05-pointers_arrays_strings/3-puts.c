#include "holberton.h"

/**
 * _puts - function that prints a string, followed by a new line
 * @str:char pointer
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
		_putchar(str[i]);

	_putchar('\n');
}
