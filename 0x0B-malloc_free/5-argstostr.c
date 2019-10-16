#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: int for number of arguments
 * @av: char double pointer for array of arguments
 * Return: Char pointer with concatenated arguments, NULL if fail or if
 * arguments passed are NULL or if number of arguments is equal to 0
 */

char *argstostr(int ac, char **av)
{
	int i, j;

	char **a;
	char *nl;

	char c = '\n';

	nl = &c;

	if (ac == '\0')
		return (NULL);


	a = (char **)malloc(ac * sizeof(char *));

	for (i = 0; i < ac; i++)
	{
		a[i]= (char *)malloc(sizeof(char *));
		if (a[i] == NULL)
			return (NULL);
	}

	for(i = 0; i < ac; i++)
	{
		for (j = 0; av[i] != '\0'; j++)
		{
			a[i] = str_concat(av[i],nl);
		}
	}

	return (*a);

	free (a);

}
