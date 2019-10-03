#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s:char pointer
 * Return: void
 */

void rev_string(char *s)
{
	int i;

	char temp;

	char *b;
	char *e;

	if (*s == '\0')
		return;

	b = s;
	e = s;

	for (i = 0; *(e + i) != '\0'; e++)
		;

	 e = e - 1;

	while (b < e)
	{
		temp = *b;

		*b = *e;

		*e = temp;

		b++;
		e--;
	}

}
