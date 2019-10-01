#include "holberton.h"

/**
 * puts_half - function that prints half of a string
 * @str:char pointer
 * Return: void
 */

void puts_half(char *str)
{
	int i, length_of_the_string;

	for (i = 0; str[i] != '\0'; i++)
		++length_of_the_string;

	if (length_of_the_string % 2 == 0)
	{
		for (i = (length_of_the_string / 2); i < length_of_the_string;
		     i++)
			_putchar(str[i]);
	}

	else
		for (i = (length_of_the_string - 1) / 2; i + 1 <=
			     length_of_the_string; i++)

			_putchar(str[i + 1]);

	_putchar('\n');
}
