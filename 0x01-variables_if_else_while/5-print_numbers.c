#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that prints numbers 0-9
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%i", i);

	putchar(10);

	return (0);
}
