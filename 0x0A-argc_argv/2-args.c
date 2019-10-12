#include <stdio.h>
/**
 * main - Program that prints the number of arguments passed into it
 * @argc: - Int of arguments passed into program including command
 * @argv: - Array of pointers to the strings of arguments passed
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; argv[i] != '\0'; argc--, i++)
		printf("%s\n", argv[i]);

	return (0);
}
