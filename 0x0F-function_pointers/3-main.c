#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Program that prints the minimum number of coins to make
 * change for an amount of money
 * @argc: - Int of arguments passed into program including command
 * @argv: - Array of pointers to the strings of arguments passed
 * Return: 0
 */

int main(int argc, char **argv)
{
	int num1 = atoi(argv[1]), num2 = atoi(argv[3]), result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == 37 || *argv[2] == 47) && *argv[3] == 48)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(argv[2])(num1, num2);

	printf("%i\n", result);


	return (0);

}
