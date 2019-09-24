#include "holberton.h"

/**
 * main - Program that prints string
 * Return: 0
 */

int main(void)
{
	char mystring[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};

	int i;

	for (i = 0; i < 10; i++)
		_putchar(mystring[i]);

	_putchar('\n');

	return (0);
}
