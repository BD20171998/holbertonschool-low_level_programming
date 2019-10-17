#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: char pointer for string
 * Return: int for length of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);

	return (0);
}

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: int for number of arguments
 * @av: char double pointer for array of arguments
 * Return: Char pointer with concatenated arguments, NULL if fail or if
 * arguments passed are NULL or if number of arguments is equal to 0
 */

char *argstostr(int ac, char **av)
{
	int i, j, l, len = 0, tl = 0;

	char *s = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += _strlen_recursion(av[i]) + 1;

	s = malloc(sizeof(char) * len + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		l = _strlen_recursion(av[i]);

		for (j = 0; j < l; j++)
			s[j + tl] = av[i][j];

		s[l + tl] = '\n';

		tl += l + 1;
	}

	s[tl] = '\0';

	return (s);
}
