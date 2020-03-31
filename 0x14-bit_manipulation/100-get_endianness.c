#include "holberton.h"

/**
 * get_endianness - function that checks the endianness
 * https://stackoverflow.com/questions/12791864/c-program-to-check-little-vs
 * -big-endian
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int x = 1;

	char *y = (char *)&x;

	if (*y + 48 == 0)
		return (0);

	else
		return (1);
}
