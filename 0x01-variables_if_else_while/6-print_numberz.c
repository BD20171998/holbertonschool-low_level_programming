#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program that prints numbers 0-9 using "putchar"
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);

	putchar(10);

	return (0);
}
