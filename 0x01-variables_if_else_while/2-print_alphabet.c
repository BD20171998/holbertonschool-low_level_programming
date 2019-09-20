#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program that prints the alphabet in lower case
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);

	putchar(10);

	return (0);
}
