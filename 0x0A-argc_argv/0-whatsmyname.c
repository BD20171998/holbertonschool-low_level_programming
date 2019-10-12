#include <stdio.h>
/**
 * main - Program that prints its name
 * @argc: - Int of arguments passed into program including command
 * @argv: - Array of pointers to the strings of arguments passed
 * Return: 0
 */

int main(int argc, char **argv)
{

	printf("%s\n", argv[argc - 1]);

	return (0);
}
