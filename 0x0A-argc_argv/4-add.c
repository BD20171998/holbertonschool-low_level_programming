#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Program that adds positive numbers
 * @argc: - Int of arguments passed into program including command
 * @argv: - Array of pointers to the strings of arguments passed
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *s;

	int i, sum = 0;

	unsigned int j, l;

	for (i = 1; i < argc; i++)
	{
		l = strlen(*(argv + i));
		s = *(argv + i);

		for (j = 0; j < l; ++j)
		{
			if (isdigit(*(s + j)) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(*(argv + i));
	}

	printf("%d\n", sum);

	return (0);
}
