#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program that adds positive numbers
 * @argc: - Int of arguments passed into program including command
 * @argv: - Array of pointers to the strings of arguments passed
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{

		if (isdigit(**(argv + i)) == 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(*(argv + i));

	}

	printf("%d\n", sum);

	return (0);
}
