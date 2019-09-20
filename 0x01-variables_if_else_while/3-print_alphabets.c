#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program that prints the alphabet in lower & upper case
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (j = 97; j < 123; j++)
		putchar(j);

	for (i = 65; i < 91; i++)
		putchar(i);

	putchar(10);

	return (0);
}
