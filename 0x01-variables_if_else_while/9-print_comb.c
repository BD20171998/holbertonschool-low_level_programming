#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that prints numbers 0-9 with spacing
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; ++i)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(44);
		putchar(32);
	}

	putchar(10);

	return (0);
}
