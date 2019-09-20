#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that prints all possible different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if ((i > j) || (i == j))
				continue;

			putchar(i);
			putchar(j);
			if (j == 57 && i == 56)
				break;
			putchar(44);
			putchar(32);
		}

		if (j == 57 && i == 56)
			break;
	}

	putchar(10);

	return (0);
}
