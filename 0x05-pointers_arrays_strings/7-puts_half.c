#include "holberton.h"

/**
 * puts_half - function that prints half of a string
 * @str:char pointer
 * Return: void
 */

void puts_half(char *str)
{
	int i, length_of_the_string, n;

	for (i = 0; str[i] != '\0'; i++)
		++length_of_the_string;

	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;

		for (i = n; i < length_of_the_string; i++)
			_putchar(str[i]);
	}

	else if (length_of_the_string == 1)
		_putchar(str[0]);

	else
	{
		n = (length_of_the_string - 1) / 2;

		for (i = n; i < length_of_the_string; i++)
			_putchar(str[i + 1]);
	}

	_putchar('\n');
}
