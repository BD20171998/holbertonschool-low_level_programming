#include <stdio.h>
/**
 * main - Program that prints the number of arguments passed into it
 * @argc: - Int of arguments passed into program including command
 * @argv: - Array of pointers to the strings of arguments passed
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, j = 0;

	for (i = argc - 1; *(argv + i) != *argv; i--)
		++j;

	printf("%d\n", j);

	return (0);
}
