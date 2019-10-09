#include "holberton.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: char double pointer for string to be changed
 * @to: char pointer to be copied
 * Return: void
 */

void set_string(char **s, char *to)
{
	char **v;

	v = &to;
	*s = *v;
}
