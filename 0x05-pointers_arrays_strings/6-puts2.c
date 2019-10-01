#include "holberton.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character
 * @str:char pointer
 * Return: void
 */

void puts2(char *str)
{
	for ( ; *str != '\0'; str += 2)
		_putchar(*str);

	_putchar('\n');
}
