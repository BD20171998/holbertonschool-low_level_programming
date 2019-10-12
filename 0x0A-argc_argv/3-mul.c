#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints the number of arguments passed into it
 * @argc: - Int of arguments passed into program including command
 * @argv: - Array of pointers to the strings of arguments passed
 * Return: 0
 */

int main(int argc, char **argv)
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(*(argv + 1));

	b = atoi(*(argv + 2));

	c = a * b;

	printf("%d\n", c);

	return (0);
}
