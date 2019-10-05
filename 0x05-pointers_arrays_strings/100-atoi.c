#include "holberton.h"
#include <limits.h>
/**
 * _atoi - function that convert a string to an integer
 * @s: char pointer to covert to number
 * Return: Integer converted from string
 */

int _atoi(char *s)
{
	int c, i = 0, n, neg = 0, num = 0, start = 0;

	while (*(s + i) < 48 || *(s + i) > 57)
	{
		if (*(s + i) == '-')
			neg++;

		if (*(s + i) == '\0')
		{
			n = 0;
			return (n);
		}

		start++;

		if (i + 1 < i)
			return (-1);
		i++;
	}

	while (*(s + i) >= 48 && *(s + i) <= 57)
	{
		++i;
		++num;
	}

	n = 0;

	for (c = start; c < (num + start); c++)
		n = n * 10 + s[c] - '0';

	if (neg % 2 != 0)
		n = -n;

	return (n);
}
