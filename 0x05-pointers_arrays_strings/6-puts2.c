#include "holberton.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character
 * @str:char pointer
 * Return: void
 */

void puts2(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);

		str += 1;
	}

	_putchar('\n');

}
