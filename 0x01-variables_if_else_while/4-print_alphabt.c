#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that prints the alphabet in lower case except "q" & "e"
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; ++i)
	{
		if (i == 101 || i == 113)
			++i;

		putchar(i);
	}

	putchar(10);

	return (0);
}
