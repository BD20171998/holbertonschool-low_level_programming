#include "holberton.h"
/**
 * print_alphabet - writes the lower case alphabet to stdout
 *
 * Return: void
 */

void  print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
