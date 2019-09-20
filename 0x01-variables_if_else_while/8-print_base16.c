#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that prints the numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{

	int i, j;

	for (j = 48; j < 58; j++)
		putchar(j);

	for (i = 97; i < 103; i++)
		putchar(i);

	putchar(10);

	return (0);
}
