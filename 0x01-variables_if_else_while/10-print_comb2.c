#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that prints numbers 0-99
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{

		for (j = 48; j < 58; j++)
		{
			putchar(i);
			putchar(j);

			if (j == 57 && i == 57)
				break;

			putchar(44);
			putchar(32);
		}

		if (j == 57 && i == 57)
			break;

	}

	putchar(10);

	return (0);
}
