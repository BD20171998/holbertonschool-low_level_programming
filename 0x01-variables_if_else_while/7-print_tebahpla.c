#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that prints the alphabet in lower case in reverse
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
		putchar(i);

	putchar(10);

	return (0);
}
